#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x156cc590, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x54554948, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x30877173, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1bdd58a2, __VMLINUX_SYMBOL_STR(blk_delay_queue) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x89b38da, __VMLINUX_SYMBOL_STR(blk_mq_requeue_request) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x79229a90, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x3ecb7e0f, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x86f6b99d, __VMLINUX_SYMBOL_STR(synchronize_rcu_expedited) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x2517a95, __VMLINUX_SYMBOL_STR(blk_integrity_is_initialized) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf8656c7e, __VMLINUX_SYMBOL_STR(blk_mq_run_hw_queues) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x398b2d34, __VMLINUX_SYMBOL_STR(bdev_stack_limits) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7242d92, __VMLINUX_SYMBOL_STR(put_dax) },
	{ 0x7c922190, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x507d34f3, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0xc476f46, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x58bc2143, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0x5cf8a882, __VMLINUX_SYMBOL_STR(__tracepoint_block_rq_remap) },
	{ 0x32bded08, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x8135613, __VMLINUX_SYMBOL_STR(dax_write_cache) },
	{ 0x9790eb74, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x7c309fa6, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0xbdc3ea30, __VMLINUX_SYMBOL_STR(blk_mq_queue_stopped) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x527e2344, __VMLINUX_SYMBOL_STR(memcpy_fromiovecend_partial_flushcache) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6fe3d8cf, __VMLINUX_SYMBOL_STR(ktime_add_safe) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xdf209b2e, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x2a3e5d36, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x149a3e2d, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2bfab66f, __VMLINUX_SYMBOL_STR(blk_set_queue_dying) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x2f80dc85, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x124af3bf, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd288ca07, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc9468df0, __VMLINUX_SYMBOL_STR(lookup_bdev) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7f923139, __VMLINUX_SYMBOL_STR(blk_insert_cloned_request) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xa23361ae, __VMLINUX_SYMBOL_STR(__blkdev_driver_ioctl) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7eadc08, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x163e344d, __VMLINUX_SYMBOL_STR(dax_memcpy_toiovecend) },
	{ 0xc00db1bd, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf7a3a397, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x691300f4, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xab6a3a82, __VMLINUX_SYMBOL_STR(cleanup_srcu_struct) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xa9bf052e, __VMLINUX_SYMBOL_STR(blk_register_queue) },
	{ 0x5977d514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x4554b079, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xa2118a69, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xd9326ea8, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x57c48c34, __VMLINUX_SYMBOL_STR(blk_stack_limits) },
	{ 0xd4b08e54, __VMLINUX_SYMBOL_STR(wait_for_completion_io) },
	{ 0x244630e9, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x8156773, __VMLINUX_SYMBOL_STR(name_to_dev_t) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37be9f32, __VMLINUX_SYMBOL_STR(bio_get_nr_vecs) },
	{ 0x64f2de93, __VMLINUX_SYMBOL_STR(add_disk_no_queue_reg) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5f6f1e9e, __VMLINUX_SYMBOL_STR(dax_get_private) },
	{ 0x56c6ec9e, __VMLINUX_SYMBOL_STR(blk_integrity_compare) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe69d2ea7, __VMLINUX_SYMBOL_STR(thaw_bdev) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xd96a2de6, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8c1cc22d, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xf47f5446, __VMLINUX_SYMBOL_STR(blk_update_request) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x138e5c86, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2735ef9d, __VMLINUX_SYMBOL_STR(init_srcu_struct) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xf2257d89, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x7193ca69, __VMLINUX_SYMBOL_STR(blk_mq_init_allocated_queue) },
	{ 0x75ef12b7, __VMLINUX_SYMBOL_STR(bio_sector_offset) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x69d6cca5, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xc4076f47, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x6958ae23, __VMLINUX_SYMBOL_STR(dax_get_by_host) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb3ea49f2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1a86fdbf, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x9f7ec514, __VMLINUX_SYMBOL_STR(bio_integrity_clone) },
	{ 0xb7a0a728, __VMLINUX_SYMBOL_STR(__bio_clone) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x55610108, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xa1d7c7fc, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x7cb14f79, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0x2f1b8501, __VMLINUX_SYMBOL_STR(scsi_verify_blk_ioctl) },
	{ 0xfad9c827, __VMLINUX_SYMBOL_STR(kill_dax) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7f6699cd, __VMLINUX_SYMBOL_STR(bio_integrity_trim) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x2bbf33e9, __VMLINUX_SYMBOL_STR(bdev_dax_pgoff) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x1b57183e, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x8925aed5, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe2d8d565, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x52b645e5, __VMLINUX_SYMBOL_STR(__smp_mb__after_atomic) },
	{ 0x39538740, __VMLINUX_SYMBOL_STR(dax_direct_access) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xac338874, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xd1b15a6, __VMLINUX_SYMBOL_STR(blk_mq_delay_kick_requeue_list) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x92744619, __VMLINUX_SYMBOL_STR(blk_integrity_unregister) },
	{ 0x381e1dfd, __VMLINUX_SYMBOL_STR(alloc_dax) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf99d347e, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xa97ccd8f, __VMLINUX_SYMBOL_STR(memcpy_toiovecend_partial) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9c97ff25, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xbf82e6af, __VMLINUX_SYMBOL_STR(synchronize_srcu) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x24e6fc92, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x32dcb2f2, __VMLINUX_SYMBOL_STR(blk_rq_unprep_clone) },
	{ 0x138e0957, __VMLINUX_SYMBOL_STR(dax_write_cache_enabled) },
	{ 0xd7e7cf6e, __VMLINUX_SYMBOL_STR(blk_mq_kick_requeue_list) },
	{ 0xb283cace, __VMLINUX_SYMBOL_STR(blk_run_queue_async) },
	{ 0x3d966527, __VMLINUX_SYMBOL_STR(freeze_bdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x47d692e0, __VMLINUX_SYMBOL_STR(blk_mq_quiesce_queue) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa49b62cc, __VMLINUX_SYMBOL_STR(blk_limits_max_hw_sectors) },
	{ 0xe68cf1d7, __VMLINUX_SYMBOL_STR(blk_init_allocated_queue) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xe66cbd01, __VMLINUX_SYMBOL_STR(blk_mq_unquiesce_queue) },
	{ 0xd6cb6349, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x3a814618, __VMLINUX_SYMBOL_STR(blk_rq_prep_clone) },
	{ 0x41d25037, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x8ec290ff, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xb5294d15, __VMLINUX_SYMBOL_STR(dm_kobject_release) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0xad0e67c, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x4550424e, __VMLINUX_SYMBOL_STR(dax_memcpy_fromiovecend) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x18e6b5cd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x6772454, __VMLINUX_SYMBOL_STR(__bdev_dax_supported) },
	{ 0xc37fdb66, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe5d95985, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8f49a246, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x9f249c9a, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xc041d114, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0xc3d1df85, __VMLINUX_SYMBOL_STR(blk_start_request) },
	{ 0x7da99cdd, __VMLINUX_SYMBOL_STR(clear_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xdf0bcb1a, __VMLINUX_SYMBOL_STR(blk_integrity_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xaee2ce2a, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "10EA7FFF7B457C5F80B4105");
MODULE_INFO(rhelversion, "7.9");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
