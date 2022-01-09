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
	{ 0x6349bd2c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x2b73a949, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x92a13429, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xfeb8b383, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xea1f9d8a, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xbd275110, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xf927fa22, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x641c268b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5c8cba0, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x32bded08, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc4076f47, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xccc91589, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x30877173, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C6773B86A3DACA50BCD476C");
MODULE_INFO(rhelversion, "7.9");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
