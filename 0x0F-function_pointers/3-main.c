#include "3-calc.h"

/**
* main - performs simple operations
* @argc: args counter
* @argv: array of args
* Return: 0
*/

int main(int argc, char *argv[])
{
	int res = 0;
	int number_1, number_2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);
	op = argv[2];

	if (number_2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(op) == 0 || op[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(op)(number_1, number_2);

	printf("%d\n", res);
	return (0);
}
