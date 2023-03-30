#include "mian.h"
#include <math.h>

/**
* print_number - print integers
* @n: integer to print
* Return: nothing
*/


void print_number(int n)
{

	if (n < 0)
	{
		_putcahr('-');
		n = -n;
	}
	if (n > 9)
		print_number(n / 10);
	_putchar(n % 10 + 0);
	_putcahr(10);

}
