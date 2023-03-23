#include "main.h"

/**
*print_line - print line in terminal
*@n: number of times
*Return: return NOTHING
*/

void print_line(int n)
{
	int i;

	i = 0;
	if (!(n <= 0))
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

