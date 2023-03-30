#include "mian.h"
#include <math.h>

/**
* print_number - print integers
* @n: integer to print
* Return: nothing
*/


void print_number(int n)
{
	int i = 0, j, div = 0;


	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	
	div = pow(10, i);

	for (j = 0; j < i; j++)
	{
		if (i != 0)
			_putchar((i / div) + 0);
		else
			_putchar((i / (div / 10)));
	}
}
