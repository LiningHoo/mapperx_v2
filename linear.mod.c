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
	{ 0xcd322ed4, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xe512c6ea, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6349bd2c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x8f8415e1, __VMLINUX_SYMBOL_STR(bio_pair2_release) },
	{ 0xb5c8cba0, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf6eb70a9, __VMLINUX_SYMBOL_STR(bio_pair_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfeb8b383, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70b1bb91, __VMLINUX_SYMBOL_STR(bio_split2) },
	{ 0x52360058, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x641c268b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x92a13429, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x2b73a949, __VMLINUX_SYMBOL_STR(register_md_personality) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DAFA0837EE06143CF6D3811");
MODULE_INFO(rhelversion, "7.9");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
