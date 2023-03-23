#include "main.h"

/**
*print_line - print line in terminal
*
*Return: return 1
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i ++)
		_putchar('_');
	_putchar('\n');
	return (0);
}

