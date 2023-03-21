#include "main.h"

/**
*print_sign - check number's sign
*@n: var to be checked
*Return: 1 or 0 or -1
*/

int print_sign(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		putchar('0');
		return (0);
	}
}

