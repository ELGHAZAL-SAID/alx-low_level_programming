#include <stdio.h>

/**
*main - print first 50 Fibonacci numbers
*
*Return: return 0
*
*/

int main(void)
{

	unsigned long int num, num1, num2, sum;

	num = 0;
	num1 = 0;
	num2 = 1;
	while (num <= 4000000)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		if (num % 2 == 0)
			sum += num;
	}
	printf("%lu\n", sum);
	return (0);
}
