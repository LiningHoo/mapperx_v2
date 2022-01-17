#include <linux/vmalloc.h>

#include "dm-cache-abt.h"

int get_level_num(int nr_blocks, int degree);
int get_idx_from_block_id(int degree, int block_id, int level_num);
void test_get_idx_from_block_id(int degree, int nr_blocks, int level_num);
int get_parent_idx(int degree, int idx);
int get_child_idx(int degree, int idx, int nth);
void abt_persistent_dirty(struct adaptive_bit_tree* abt, int idx);
void abt_persistent_clean(struct adaptive_bit_tree* abt, int idx);
void abt_periodic_adjust(struct work_struct *work);
int find_most_write_parent_idx(struct adaptive_bit_tree* abt);
int find_least_write_idx(struct adaptive_bit_tree* abt);

struct complete_bit_tree* cbt_create(int degree, int nr_blocks) {
    struct complete_bit_tree* cbt;

    cbt = (struct complete_bit_tree*)vmalloc(sizeof(struct complete_bit_tree*));
    cbt->degree = degree;
    cbt->level_num = get_level_num(nr_blocks, degree);
    cbt->size = get_idx_from_block_id(degree, nr_blocks-1, cbt->level_num) + 1;
    cbt->bitset = (bool*)vmalloc(sizeof(bool)*cbt->size);
    memset(cbt->bitset, 0, sizeof(bool)*cbt->size);
    cbt->metadata_writes = (int*)vmalloc(sizeof(int)*cbt->size);
    memset(cbt->metadata_writes, 0, sizeof(int)*cbt->size);
    spin_lock_init(&cbt->lock);
    printk(KERN_INFO "nr_blocks=%d, level_num=%d", nr_blocks, cbt->level_num);
    return cbt;
}

void abt_persistent_dirty(struct adaptive_bit_tree* abt, int idx) {
    abt->cbt->metadata_writes[idx] += 1;
    abt->total_metadata_writes += 1;
    // printk(KERN_INFO "abt presistent dirty, idx=%d", idx);
}

void abt_persistent_clean(struct adaptive_bit_tree* abt, int idx) {
    abt->cbt->metadata_writes[idx] += 1;
    abt->total_metadata_writes += 1;
    // printk(KERN_INFO "abt presistent clean, idx=%d", idx);
}

void abt_set_dirty(struct adaptive_bit_tree* abt, int block_id) {
    int idx;
    
    idx = get_idx_from_block_id(abt->cbt->degree, block_id, abt->cbt->level_num);
    while(idx >= 0) {
        abt->cbt->bitset[idx] = true;
        if (hashmap_exists(&abt->leaves, idx)) {
            abt_persistent_dirty(abt, idx);
        }
        idx = get_parent_idx(abt->cbt->degree, idx);
    }
}

void abt_set_clean(struct adaptive_bit_tree* abt, int block_id) {
    int idx, i, child;
    
    idx = get_idx_from_block_id(abt->cbt->degree, block_id, abt->cbt->level_num);
    while(idx >= 0) {
        abt->cbt->bitset[idx] = false;
        if (hashmap_exists(&abt->leaves, idx)) {
            abt_persistent_clean(abt, idx);
        }
        idx = get_parent_idx(abt->cbt->degree, idx);
        if (idx < 0) break;
        for(i=1; i<=abt->cbt->degree; ++i) {
            child = get_child_idx(abt->cbt->degree, idx, i);
            if (child >= abt->size) {
                break;
            }
            if (abt->cbt->bitset[child]) {
                goto exit;
            }
        }
    }
exit:
    return;
}

struct adaptive_bit_tree* abt_create(int degree, int nr_blocks) {
    struct adaptive_bit_tree* abt;

    abt = vmalloc(sizeof(struct adaptive_bit_tree*));
    abt->cbt = cbt_create(degree, nr_blocks);
    abt->degree = abt->cbt->degree;
    abt->size = abt->cbt->size;
    hashmap_init(&abt->leaves, 1024);
    hashmap_add(&abt->leaves, 0, NULL);
    INIT_DELAYED_WORK(&abt->periodic_adjust_work, abt_periodic_adjust);
    abt->total_writes = 0;
    abt->total_metadata_writes = 0;
    abt->sla = 100;
    schedule_delayed_work(&abt->periodic_adjust_work, 1 * HZ);
    printk(KERN_INFO "abt create finish");
    return abt;
}

int get_level_num(int nr_blocks, int degree) {
    int level = 1, capacity = 1;
    while(capacity < nr_blocks) {
        ++level;
        capacity *= degree;
    }
    return level;
}

int int_pow(int base, int exp) {
    int i;

    int res = 1;
    for(i=0; i<exp; ++i) {
        res *= base;
    }
    return res;
}

int get_parent_idx(int degree, int idx) {
    if (idx <= 0) return -1;
    return (idx-1)/degree;
}

int get_child_idx(int degree, int idx, int nth) {
    return idx*degree + nth;
}

int get_idx_from_block_id(int degree, int block_id, int level_num) {
    int res;

    res = (int_pow(degree, level_num-1)-1)/(degree-1) + block_id;
    // printk(KERN_INFO "block_id=%d, index=%d", block_id, res);
    return res;
}

void test_get_idx_from_block_id(int degree, int nr_blocks, int level_num) {
    int i;

    for(i=0; i<nr_blocks; i+=10000) {
        int idx = get_idx_from_block_id(degree, i, level_num);
        while(idx > degree) {
            idx = get_parent_idx(degree, idx);
        }
        printk(KERN_INFO "block_id=%d, idx=%d", i, idx);
    }
}

void abt_periodic_adjust(struct work_struct *work) {
    bool dirty;
    int i;
    int most_writes_parent_idx, least_writes_idx, child;
    struct adaptive_bit_tree* abt = container_of(work, struct adaptive_bit_tree, periodic_adjust_work);

    printk(KERN_INFO "total: %d, metadata: %d", abt->total_writes, abt->total_metadata_writes);

    spin_lock_irq(&abt->cbt->lock);

    most_writes_parent_idx = find_most_write_parent_idx(abt);
    least_writes_idx = find_least_write_idx(abt);

    if (abt->total_metadata_writes > 0 && abt->total_writes / abt->total_metadata_writes > abt->sla) {
        dirty = false;
        for (i=1; i<=abt->degree; ++i) {
            child = get_child_idx(abt->degree, least_writes_idx, i);
            if (child < abt->size && abt->cbt->bitset[child]) {
                dirty = true;
                hashmap_add(&abt->leaves, child, NULL);
            }
        }
        if (dirty)
            hashmap_delete(&abt->leaves, least_writes_idx);
    } else {
        dirty = false;

        if (most_writes_parent_idx < 0) {
            goto next;
        }

        for (i=1; i<=abt->degree; ++i) {
            child = get_child_idx(abt->degree, most_writes_parent_idx, i);
            hashmap_delete(&abt->leaves, child);
            if (child < abt->size && abt->cbt->bitset[child]) {
                dirty = true;
            }
        }
        if (dirty) {
            hashmap_add(&abt->leaves, most_writes_parent_idx, NULL);
        } 
    }

next:
    spin_unlock_irq(&abt->cbt->lock);

    printk(KERN_INFO "most: %d, least: %d", most_writes_parent_idx, least_writes_idx);

    memset(abt->cbt->metadata_writes, 0, sizeof(int)*abt->cbt->size);
    abt->total_writes = 0;
    abt->total_metadata_writes = 0;
    schedule_delayed_work(&abt->periodic_adjust_work, 1 * HZ);
}

void abt_destroy(struct adaptive_bit_tree* abt) {
    cancel_delayed_work_sync(&abt->periodic_adjust_work);
}

int find_most_write_parent_idx(struct adaptive_bit_tree* abt) {
    int i, parent_idx;
    int most_writes = 0, idx = -1;
    struct hashmap_value* obj;

    for (i=0; i<abt->leaves.bucket_num; ++i) {
        hlist_for_each_entry(obj, &abt->leaves.hlists[i], node) {
            parent_idx = get_parent_idx(abt->degree, obj->key);
            if (parent_idx < 0) return -1;
            if (abt->cbt->metadata_writes[parent_idx] >= most_writes) {
                most_writes = abt->cbt->metadata_writes[parent_idx];
                idx = parent_idx;
            }
        }
    }

    return idx;
}

int find_least_write_idx(struct adaptive_bit_tree* abt) {
    int i;
    int least_writes = INT_MAX, idx = -1;
    struct hashmap_value* obj;

    for (i=0; i<abt->leaves.bucket_num; ++i) {
        hlist_for_each_entry(obj, &abt->leaves.hlists[i], node) {
            if (abt->cbt->metadata_writes[obj->key] <= least_writes) {
                least_writes = abt->cbt->metadata_writes[obj->key];
                idx = obj->key;
            }
        }
    }

    return idx;
}
