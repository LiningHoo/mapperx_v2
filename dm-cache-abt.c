#include <linux/vmalloc.h>

#include "dm-cache-abt.h"

int get_level_num(int nr_blocks, int degree);
int get_idx_from_block_id(int degree, int block_id, int level_num);
void test_get_idx_from_block_id(int degree, int nr_blocks, int level_num);
int get_parent_idx(int degree, int idx);
int get_child_idx(int degree, int idx, int nth);

struct complete_bit_tree* cbt_create(int degree, int nr_blocks) {
    struct complete_bit_tree* cbt;

    cbt = (struct complete_bit_tree*)vmalloc(sizeof(struct complete_bit_tree*));
    cbt->degree = degree;
    cbt->level_num = get_level_num(nr_blocks, degree);
    cbt->size = get_idx_from_block_id(degree, nr_blocks-1, cbt->level_num) + 1;
    cbt->bitset = (bool*)vmalloc(sizeof(bool)*cbt->size);
    spin_lock_init(&cbt->lock);
    printk(KERN_INFO "nr_blocks=%d, level_num=%d", nr_blocks, cbt->level_num);
    return cbt;
}

void cbt_set_dirty(struct complete_bit_tree* cbt, int block_id) {
    int idx;
    
    idx = get_idx_from_block_id(cbt->degree, block_id, cbt->level_num);
    while(idx >= 0) {
        // if (idx > 0 && idx <= cbt->degree) 
        //     printk(KERN_INFO "block_id=%d, idx=%d", block_id, idx);
        cbt->bitset[idx] = true;
        idx = get_parent_idx(cbt->degree, idx);
    }
}

void cbt_set_clean(struct complete_bit_tree* cbt, int block_id) {
    int idx, i, child;
    
    idx = get_idx_from_block_id(cbt->degree, block_id, cbt->level_num);
    while(idx >= 0) {
        cbt->bitset[idx] = false;
        idx = get_parent_idx(cbt->degree, idx);
        if (idx < 0) break;
        for(i=1; i<=cbt->degree; ++i) {
            child = get_child_idx(cbt->degree, idx, i);
            if (cbt->bitset[child]) {
                printk(KERN_INFO "least dirty idx=%d, block_id=%d", idx, block_id);
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