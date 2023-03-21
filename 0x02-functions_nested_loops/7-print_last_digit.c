#include "main.h"

/**
*print_last_digit - print last digit or a num
*@n: var - num to print its last
*Return: num > 0
*/

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

