#include "main.h"

/**
*jack_bauer: print every minute form 00:00 to 23:59
*
*Return: nothing
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0; j < 24; i++)
	{
		for (j = 0; j <= 59; j++ )
		{
			if (i < j)
			{
				if (i < 10)
					_putchar(0 + '0');
					_putchar(i + '0')
				else if (j < 10)
					_putchar(0 + '0');
					_putchar(j + '0')
				else
				{
					_putchar(i + '0');
					_putchar(':');
					_putchar(j + '0');
				}
			}
		}
	}
}
