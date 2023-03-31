#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: number one to add
* @n2: number two to add
* @r: were to store
* @size_r: size of the buffer
* Return: r address
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1 = sizeof(n1);
	int size_n2 = sizeof(n2);
	int i = 0, j = 0, max_size = 0, min_size = 0;

	if (size_n1 > size_n2)
	{
		max_size = size_n1;
		min_size = size_n2;
	}
	else
	{
		min_size = size_n1;
		max_size = size_n2;
	}
	if (size_r < max_size)
		return (0);

	while (max_size > 0)
	{
		if ()
	}
}
