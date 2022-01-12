#ifndef DM_CACHE_ABT_H
#define DM_CACHE_ABT_H

#include <linux/spinlock.h>
#include <linux/workqueue.h>

#include "dm-cache-hashmap.h"

struct complete_bit_tree {
    bool *bitset;
    int degree;
    int size;
    int level_num;
    int *writes;
    spinlock_t lock;
};

struct complete_bit_tree* cbt_create(int degree, int nr_blocks);

struct adaptive_bit_tree {
    struct complete_bit_tree* cbt;
    int degree;
    int size;
    struct hashmap leaves;

    struct delayed_work periodic_adjust_work;
};

struct adaptive_bit_tree* abt_create(int degree, int nr_blocks);
void abt_set_dirty(struct adaptive_bit_tree* abt, int block_id);
void abt_set_clean(struct adaptive_bit_tree* abt, int block_id);
void abt_destroy(struct adaptive_bit_tree* abt);

#endif