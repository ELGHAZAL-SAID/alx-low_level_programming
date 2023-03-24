#include "main.h"

/**
*print_square - printing square using #
*@size: square demantions
*Return: 0 always
*/



void print_square(int size)
{
	int i, j;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

