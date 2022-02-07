#ifndef DM_CACHE_ABT_H
#define DM_CACHE_ABT_H

#include <linux/spinlock.h>
#include <linux/workqueue.h>

#include "dm-cache-hashmap.h"
#include "dm-cache-metadata.h"

static const uint64_t ABT_LEAF_CLEAN = 0;
static const uint64_t ABT_LEAF_DIRTY = 1; 

struct complete_bit_tree {
    bool *bitset;
    int degree;
    int size;
    int level_num;
    int *metadata_writes;
    spinlock_t lock;
};

struct complete_bit_tree* cbt_create(int degree, int nr_blocks);

struct adaptive_bit_tree {
    struct complete_bit_tree* cbt;
    int degree;
    int size;
    int total_writes;
    int total_metadata_writes;
    int sla;
    struct hashmap leaves;
    struct dm_cache_metadata *cmd;

    struct delayed_work periodic_adjust_work;
};

struct adaptive_bit_tree* abt_create(int degree, int nr_blocks);
void abt_set_dirty(struct adaptive_bit_tree* abt, int block_id);
void abt_set_clean(struct adaptive_bit_tree* abt, int block_id);
void abt_destroy(struct adaptive_bit_tree* abt);
int get_idx_from_block_id(int degree, int block_id, int level_num);
int get_parent_idx(int degree, int idx);

#endif