#include "main.h"

/**
*print_times_table - print times table
*
*Return: nothing
*/

void print_times_table(int n)
{
	int i, j, mult;

	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(44);
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
