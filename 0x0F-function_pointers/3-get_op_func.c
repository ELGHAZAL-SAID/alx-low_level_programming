#include "3-calc.h"

/**
* get_op_func - get the optional operartor
* @s: parametter
* Return: pointer to the function
* that corresponds the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != 0)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (0);
}

