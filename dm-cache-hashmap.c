#include "dm-cache-hashmap.h"

void hashmap_init(struct hashmap* map, int slot_num) {
    int i;

    map->slot_num = slot_num;
    map->hlists = (struct hlist_head*)vmalloc(sizeof(struct hlist_head)*slot_num);
    for(i=0; i<slot_num; ++i) {
        INIT_HLIST_HEAD(&map->hlists[i]);
    }
}

void hashmap_destroy(struct hashmap* map) {
    vfree(map->hlists);
}

void hashmap_add(struct hashmap* map, int key, void* data) {
    struct hashmap_value* value = (struct hashmap_value*)vmalloc(sizeof(struct hashmap_value));
    value->key = key;
    value->data = data;
    hlist_add_head(&value->node, &map->hlists[key%(map->slot_num)]);
}

void test_hashmap() {
    int i;

    struct hashmap map;
    hashmap_init(&map, 3);
    for(i=0; i<10; ++i) {
        hashmap_add(&map, i, NULL);
    }

    for(i=0; i<20; ++i) {
        printk(KERN_INFO "object exists: %d", hashmap_exists(&map, i));
    }
}

bool hashmap_exists(struct hashmap* map, int key) {
    struct hashmap_value* obj;

    hlist_for_each_entry(obj, &map->hlists[key%(map->slot_num)], node) {
        if(obj->key == key) 
            return true;
    }
    return false;
}

// void hashmap_delete(struct hashmap* map, int key) {

// }