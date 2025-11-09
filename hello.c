#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Prajwal");
MODULE_DESCRIPTION("Hello Kernel module with parameter");
MODULE_VERSION("0.2");

static char *name = "Prajwal";
module_param(name, charp, 0);
MODULE_PARM_DESC(name, "Name to greet");

static int __init hello_init(void){
	pr_info("hello %s from kernel:) module loaded! \n", name);
	return 0;
}

static void __exit hello_exit(void){
	pr_info("GoodBye %s from kernel:) module unloaded \n", name);
}

module_init(hello_init);
module_exit(hello_exit);
