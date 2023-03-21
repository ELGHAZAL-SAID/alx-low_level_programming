#include "main.h"

/**
*print_times_table - print times table
*@n: were to end in table
*Return: nothing
*/

void print_times_table(int n)
{
	int i, j, mult;

	if (n < 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(44);
			_putchar(32);
			mult = i * j;
			if (mult >= 100)
			{
				_putchar(mult / 100 + '0');
				_putchar((mult % 100) / 10 + '0');
				_putchar((mult % 10) + '0');
			}
			else if (mult >= 10 && mult <= 99)
			{
				_putchar(32);
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(32);
				_putchar(mult + 48);
			}
		}
		_putchar('\n');
	}
	}
}
