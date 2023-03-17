#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - main function -> check if a  number is >0 or <0
*
*Return: return 0 every-time
*/

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);

}