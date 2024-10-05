#include <linux/device.h>
#include <linux/fs.h> 
#include <linux/module.h>
#include <linux/seq_file.h>

MODULE_AUTHOR("your mom");
MODULE_DESCRIPTION("very sus driver");
MODULE_LICENSE("GPLv10");

static int __init based_init(void) 
{
	printk(KERN_INFO "ready to handle stack for you, mate");
	return 0;
}


static void __exit based_exit(void) 
{
	printk(KERN_INFO "no more stack :(  ");
}

module_init(based_init);
module_exit(based_exit);
