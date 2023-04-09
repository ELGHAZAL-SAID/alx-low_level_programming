#include <stdio.h>
#include <stdlib.h>


/**
* minimum - minimum number of coins to make change for an amount of money
* @num: the number presenting the amount of money
* Return: count of min numbers
*/

int minimum(int num)
{
	int i = 0;
	int counter = 0;
	char coins[] = {1, 2, 5, 10, 25};

	while (num > 0)
		{
		if (num >= coins[4 - i])
		{
			num -= coins[4 - i];
			counter++;
			continue;
		}
		i++;
	}
	return (counter);
}


/**
* main - print minimum number of coins to make change for an amount of money
* @argc: number arguments supplied to the program
* @argv: table of arguments supplied to the program
* Return: laways 0
*/


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (atoi(*(argv + 1)) >= 0)
		{
			printf("%d\n", minimum(atoi(*(argv + 1))));
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

