#include <stdio.h>

/**
*main - print nums form 1 to 100 and replace mult of 3 by Fizz
*and mult of 5 by Buzz and mult of 3 and 5 by FizzBuzz
*Return: always 1
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (1);
}
