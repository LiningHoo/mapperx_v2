#ifndef DM_CACHE_ABT_H
#define DM_CACHE_ABT_H

#include <linux/spinlock.h>

struct complete_bit_tree {
    bool *bitset;
    int degree;
    int size;
    int level_num;
    spinlock_t lock;
};

struct complete_bit_tree* cbt_create(int degree, int nr_blocks);

struct adaptive_bit_tree {
    struct complete_bit_tree* cbt;
    int degree;
};

struct adaptive_bit_tree* abt_create(int degree, int nr_blocks);
void cbt_set_dirty(struct complete_bit_tree* cbt, int block_id);
void cbt_set_clean(struct complete_bit_tree* cbt, int block_id);

#endif