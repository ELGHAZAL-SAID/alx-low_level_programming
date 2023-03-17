#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* betty style doc for function main goes there 
*main - mian function -> check if a  number is >0 or <0
*
*Return: return 0 everytime
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is positive", n);
	}
	else if (n<0)
	{
		printf("%d is negative", n);
	}	
		
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
