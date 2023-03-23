#include "main.h"

/**
*print_line - print line in terminal
*@a: number of times
*Return: return 1
*/

void print_line(int n)
{
	int i;

	i = 0;
	if (!(n <= 0))
	{
		while(i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
	return (0);

}

