#include "lists.h"

/**
* before_main - execut code before main function
* Return: nothing
*/

void __attribute__ ((__constructor__)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
