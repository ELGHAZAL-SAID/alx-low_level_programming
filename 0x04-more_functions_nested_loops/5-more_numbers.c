#include "main.h"

/**
*more_numbers - print 1 to 14, 10 times
*
*Return: nothing
*/

void more_numbers(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i >= 10)
			{
				_putchar((i / 10)%10 + 32);
				_putchar(i % 10 + 32);
			}
			_putchar(i + 32);
		}
	_putchar('\n');
	}

}
