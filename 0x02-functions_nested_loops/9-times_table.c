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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			mult = i * j;
			if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(mult + 48);
			}
		}
		_putchar('\n');
	}
}
