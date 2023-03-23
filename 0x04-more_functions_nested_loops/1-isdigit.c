#include "main.h"

/**
*_isdigit - check if c is digit
*@c: var to check
*Return: 1 if digit, else 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

