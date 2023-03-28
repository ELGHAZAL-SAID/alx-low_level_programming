#include "main.h"
#include <stdio.h>
/**
*print_array - print array elements
*@n: number of elements to print
*@a: array to be printed
*Return: nothing
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%c", a);
		if (_strlen(a) != i + 1)
			printf(", ");
	}
	printf("\n");
}
