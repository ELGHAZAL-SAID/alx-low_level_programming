#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sum of diagonals of square matrix
* of integers
* @a: matrix of integers
* @size: size of the matrix
* Return: always 0;
*/


void print_diagsums(int *a, int size)
{
	int i = 0, value_1 = 0, value_2 = 0;

	for (i = 0; i < size; i++)
	{
		value_1 += *(a + i);
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		value_2 += *(a + i);
		a = a - size;
	}
	printf("%d, %d\n", value_1, value_2);
}
