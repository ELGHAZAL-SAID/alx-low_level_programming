#include "main.h"

/**
* _strdup - duplicate string in memory
* @str: string to duplicate
* Return: duplicated value
*/


char *_strdup(char *str)
{
	char *t;
	int i;

	if (str == 0)
		return (0);
	t = malloc(sizeof(str));

	if (t == 0)
		return (0);
	for (i = 0; *(str + i) != 0; i++)
	{
		*(t + i) = *(str + i);
	}
	return (t);
}
