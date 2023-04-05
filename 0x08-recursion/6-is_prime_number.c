#include "main.h"

/**
* is_prime_number - check if the input is a prime num
* @n: number to check
* Return: 1 if prime, 0 if not
*/


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n / 2, n));
}


/**
* _prime - calculate the natural square root of a number
* @num: number to be tested
* @y: number to be squared
* Return: square root
*/


int _prime(int num, int y)
{
	if (num <= 1)
		return (1);
	if (y % num == 0)
	{
		return (0);
	}
	return (_prime(num - 1, y));
}

