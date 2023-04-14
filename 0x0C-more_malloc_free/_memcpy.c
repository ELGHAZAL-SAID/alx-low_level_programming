#include "main.h"

/**
* _memcpy - copy content from src to dest
* @dest: destination to copy to
* @src: src to copy from
* @n: number of elements to copy
* Return: pointer to dest
*/


void *_memcpy(void *dest, const void *src, unsigned int n)
{
	const char *ptr = (const char *) src;
	char *des = (char *) dest;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		des[i] = ptr[i];
	return (des);
}
