#include "main.h"

/**
* _strdup - duplicate string in memory
* @str: string to duplicate
* Return: duplicated value
*/


char *_strdup(char *str)
{
	char *t;
	int i, j = 0;

	while (*(str + j) !=0)
		j++;


	if (str == 0)
		return (0);
	t = malloc(j + 1);

	if (t == 0)
		return (0);

	for (i = 0; i <= j; i++)
	{
		*(t + i) = *(str + i);
	}
	return (t);
}

