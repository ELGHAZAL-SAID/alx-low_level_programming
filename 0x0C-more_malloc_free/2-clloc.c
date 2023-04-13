#include "main.c"


/**
* _calloc - allocating memory for an array
* @nmemb: number of elements of array
* @size: size of the element
* Return: 0
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	t = malloc(nmemb * size);
	if (!t)
		return (0);
	for (i = 0; i < size; i++)
		*(t + i) = 0;
	return (t);
}
