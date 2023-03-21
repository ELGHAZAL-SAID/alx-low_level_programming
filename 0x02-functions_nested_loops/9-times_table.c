#include "main.h"

/**
*times_table - print times table
*
*Return: nothing
*/

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('\0');
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(mult + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				if (mult < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
