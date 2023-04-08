#include <stdio.h>

/**
* main - print the program name
* @argc: number arguments supplied to the program
* @argv: table of arguments supplied to the program
* Return: laways 0
*/


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	printf("\n");
	return (0);
}
