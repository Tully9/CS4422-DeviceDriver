#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>

static int __init firstDriver_init(void) { //constructor

    printk(KERN_INFO "First Driver: Initialized\n");

    return 0; // Return 0 for successful initialization
}

static void __exit firstDriver_exit(void) { //destructor

    printk(KERN_INFO "First Driver: Exited\n");

}

module_init(firstDriver_init);
module_exit(firstDriver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("AT");
MODULE_DESCRIPTION("Driver base");