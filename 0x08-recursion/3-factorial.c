#include "main.h"
#include <stdio.h>


/**
* factorial - calculate factorial of n
* @n: number
* Return: number
*/


int factorial(int n)
{

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	return (-1);
}

