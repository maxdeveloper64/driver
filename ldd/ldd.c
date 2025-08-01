#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tizio");
MODULE_DESCRIPTION("Linuz Device Driver");

static struct proc_dir_entry *custom_proc_node;

static ssize_t ldd_read(struct file *, char __user *, size_t, loff_t *) {
    printk("Read ldd driver entry.\n");



    printk("Read ldd driver exit.\n");
    return 0;
};

struct proc_ops driver_proc_ops = {
    .proc_read = ldd_read,
};

static int ldd_module_init(void) {
    printk("Init ldd driver entry.\n");

    custom_proc_node = proc_create("ldd_driver", 0, NULL, &driver_proc_ops);

    if (custom_proc_node == NULL) {
        printk("Init ldd driver failed.\n");
        return -1;    
    }
    
    printk("Init ldd driver exit.\n");
    
    return 0;
}

static void ldd_module_exit(void) {
    printk("Exit ldd driver entry.\n");

    proc_remove(custom_proc_node);

    printk("Exit ldd driver exit.\n");
}




module_init(ldd_module_init);
module_exit(ldd_module_exit);