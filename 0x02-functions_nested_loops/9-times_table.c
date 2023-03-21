#include "main.h"

/**
*times_table - print times table
*
*Return: nothing
*/

int times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			_putchar('0' + mult/10);
			_putchar('0' + mult % 10);
			if (j != 9)
			{
				_putchar(',');
				if (mult < 10)
					_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
