#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tizio");
MODULE_DESCRIPTION("Linuz Device Driver");

static int ldd_module_init(void) {
    printk("Inited ldd driver.\n");
    return 0;
}

static void ldd_module_exit(void) {
    printk("Exit ldd driver.\n");
}

struct proc_dir_entry *proc_create(const char *name, umode_t mode, struct proc_dir_entry *parent, const struct proc_ops *proc_ops);


module_init(ldd_module_init);
module_exit(ldd_module_exit);