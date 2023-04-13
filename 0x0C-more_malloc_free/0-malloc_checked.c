#include "main.h"


/**
* *malloc_checked - allocat memory
* @b: size to be taken in teh memory
* Return: 0
*/


void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t != 0)
		return (t);
	exit(98);
}
