#include "3-calc.h"


/**
* main - prints the opcodes of the main function
* @argc: counter
* @argv: array of parameter
* Return: 0
*/

int main(int argc, char **argv)
{
	int i, bytes;
	int (*add)(int, char **) = main;
	unsigned char opcode;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		add++;
	}
	printf("\n");
	return (0);

}
