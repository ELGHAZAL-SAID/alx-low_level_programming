#include <stdio.h>

/**
*main - some of mpultiples of 3 and 5 below 1024
*
*Return: return 0
*/

int main(void)
{

	int i, sum;

	for (i = 3; i <= 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
		else if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
