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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6349bd2c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x2b73a949, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdddfa804, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0xed997199, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x63997e5c, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa9cf5fc1, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x353acece, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xbc5deb7c, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x4554b079, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xcf72da4f, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xb5c8cba0, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xa2390892, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xea7f342b, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbc610d95, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x1ef0444, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x48c97789, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x81c81f46, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x17e36a81, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xea1f9d8a, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xf927fa22, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xbd275110, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xf2afa233, __VMLINUX_SYMBOL_STR(mddev_init_writes_pending) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xef5079eb, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcec77027, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9452ff46, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x7f495710, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xf38db268, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xd02ea08e, __VMLINUX_SYMBOL_STR(__trace_note_message) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x2ba4cb8a, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x32bded08, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x9a827581, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xf8490cdc, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x450ba791, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x133666ea, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x1990ae2e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x10e74b6d, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x92a13429, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x258e5a3a, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfeb8b383, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x12267ef9, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x60f6a84, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x63dab433, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xf97bcb1f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeeba877f, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x7e21600e, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8F5CEC6433600BE0BE48D1");
MODULE_INFO(rhelversion, "7.9");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
