#include <linux/module.h>
#include <linux/kernel.h>


static int db_init(void) {
    pr_info("started kernel db\n");
    return 0;
}


static void db_exit(void) {
    pr_info("exiting kernel db\n");
}

module_init(db_init)
module_exit(db_exit)
MODULE_LICENSE("GPL");