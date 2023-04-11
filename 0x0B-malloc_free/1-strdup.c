#include "main.h"

/**
* _strdup - duplicate string in memory
* @str: string to duplicate
* Return: duplicated value
*/


char *_strdup(char *str)
{
	char *t;
	int i, j = 1;

	if (!str)
		return (0);

	while (*(str + j) != 0)
		j++;

	t = malloc(j + 1);

	if (!t)
		return (0);

	for (i = 0; i <= j; i++)
	{
		*(t + i) = *(str + i);
	}
	return (t);
}
