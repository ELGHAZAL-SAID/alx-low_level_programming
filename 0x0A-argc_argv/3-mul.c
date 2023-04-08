#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number arguments supplied to the program
* @argv: table of arguments supplied to the program
* Return: laways 0
*/

int main(int argc, char *argv[])
{
	if (argc >= 3)
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
