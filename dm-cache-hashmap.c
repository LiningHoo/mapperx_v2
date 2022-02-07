#include "dm-cache-hashmap.h"

int get_bucket(int key, int bucket_num);

void hashmap_init(struct hashmap* map, int bucket_num) {
    int i;

    map->bucket_num = bucket_num;
    map->hlists = (struct hlist_head*)vmalloc(sizeof(struct hlist_head)*bucket_num);
    for(i=0; i<bucket_num; ++i) {
        INIT_HLIST_HEAD(&map->hlists[i]);
    }
}

void hashmap_destroy(struct hashmap* map) {
    vfree(map->hlists);
}

void hashmap_add(struct hashmap* map, int key, uint64_t data) {
    struct hashmap_value* value = (struct hashmap_value*)vmalloc(sizeof(struct hashmap_value));

    hashmap_delete(map, key);
    value->key = key;
    value->data = data;
    hlist_add_head(&value->node, &map->hlists[get_bucket(key, map->bucket_num)]);
}

int get_bucket(int key, int bucket_num) {
    return key % bucket_num;
}

void test_hashmap() {
    int i;

    struct hashmap map;
    hashmap_init(&map, 8);
    for(i=0; i<10; ++i) {
        hashmap_add(&map, i, NULL);
    }

    for(i=0; i<10; ++i) {
        printk(KERN_INFO "key %d, object exists: %d", i, hashmap_exists(&map, i));
    }

    for(i=0; i<5; ++i) {
        hashmap_delete(&map, i);
    }

    for(i=0; i<10; ++i) {
        printk(KERN_INFO "key %d, object exists: %d", i, hashmap_exists(&map, i));
    }
}

bool hashmap_exists(struct hashmap* map, int key) {
    struct hashmap_value* obj;

    hlist_for_each_entry(obj, &map->hlists[get_bucket(key, map->bucket_num)], node) {
        if(obj->key == key) 
            return true;
    }
    return false;
}

bool hashmap_delete(struct hashmap* map, int key) {
    struct hashmap_value* obj;

    hlist_for_each_entry(obj, &map->hlists[get_bucket(key, map->bucket_num)], node) {
        if(obj->key == key) {
            hlist_del_init(&obj->node);
            return true;
        }
    }

    return false;
}

int hashmap_getval(struct hashmap* map, int key, uint64_t *result) {
    struct hashmap_value* obj;

    hlist_for_each_entry(obj, &map->hlists[get_bucket(key, map->bucket_num)], node) {
        if(obj->key == key) {
            *result = obj->data;
            return 0;
        }
    }

    return -ENODATA;
}