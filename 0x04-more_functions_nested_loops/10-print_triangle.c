#include "main.h"

/**
*print_triangle - print a triangle using #
*@size: size of triangle
*Return: always 0
*/

void print_triangle(int size)
{

	int i, j, k;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size - i; j++)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

