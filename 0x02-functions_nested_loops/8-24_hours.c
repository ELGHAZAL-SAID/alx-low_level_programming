#include "main.h"

/**
*jack_bauer: print every minute form 00:00 to 23:59
*
*Return: nothing
*/

void jack_bauer(void)
{

	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}

