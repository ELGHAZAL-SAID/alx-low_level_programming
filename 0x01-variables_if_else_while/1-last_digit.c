#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - main function -> check last digit of a number
*
*Return: return 0 every-time
*/
int main(void)
{

	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if ((i < 6) && !(i == 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	else if (i == 0)
		printf("Last digit of %d is %d and is 0\n", n, i);
	return (0);

}
