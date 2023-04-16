#include "main.h"

/**
* main - multiply to args passed to the program
* @argc: counter of arguments
* @argv: values holder
* Return: 0
*/


int main(int argc, char **argv)
{
	int i, j;
	unsigned long num;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", num);
	return (0);
}
