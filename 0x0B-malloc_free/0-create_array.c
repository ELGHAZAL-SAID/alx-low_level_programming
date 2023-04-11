#include "main.h"

/**
* create_array - create an array
* @size: size of the array
* @c: char used to initialize the array
* Return: 0 if size null,else pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size > 0)
	{
		t = malloc(size);
		if (t == 0)
			return (0);
		for (i = 0; i < size; i++)
			*(t + i) = c;
		return (t);
	}
	return (0);
}
