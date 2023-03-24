#include <stdio.h>
#include <stdbool.h>

/**
*main - find and print the lagest prime factor of a number
*
*Return: always 0
*/

int main(void)
{

	unsigned long int num, i, prime;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			prime = i;
			num = num / prime;
		}
	}
	printf("%lu\n", prime);
	return (0);
}

