#ifndef DM_CACHE_HASH_MAP_H
#define DM_CACHE_HASH_MAP_H

#include <linux/hashtable.h>
#include <linux/vmalloc.h>

struct hashmap {
    int slot_num;
    struct hlist_head *hlists;
};

typedef int hashmap_key;

struct hashmap_value {
    void* data;
    int key;
    struct hlist_node node;
};

void hashmap_init(struct hashmap* map, int bits);
// void hashmap_destroy(struct hashmap* map);
void hashmap_add(struct hashmap* map, int key, void* data);
void hashmap_delete(struct hashmap* map, int key);
void test_hashmap(void);
bool hashmap_exists(struct hashmap* map, int key);

#endif