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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf8490cdc, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6349bd2c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x8f8415e1, __VMLINUX_SYMBOL_STR(bio_pair2_release) },
	{ 0xd2bdf59b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xfeb8b383, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70b1bb91, __VMLINUX_SYMBOL_STR(bio_split2) },
	{ 0x641c268b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x2b73a949, __VMLINUX_SYMBOL_STR(register_md_personality) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "953240E0FAE71ED695E53C0");
MODULE_INFO(rhelversion, "7.9");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
