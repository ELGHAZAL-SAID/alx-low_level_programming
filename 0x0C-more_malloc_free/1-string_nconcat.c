#include "main.h"


/**
* string_nconcat - concatenates two strings
* @s1: string one
* @s2: string two
* @n: n first bytes of s2
* Return: pointer of concat string or 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 != 0)
		while (*(s1 + i) != 0)
		i++;
	len = i;

	if (s2 != 0)
		while (*(s2 + j) != 0)
			j++;
	if (n >= j)
		len += j;
	else
		len += n;

	t = malloc(len + 1);

	if (t == 0)
		return (0);
	j = 0;

	while (j < i)
	{
		*(t + j) = *(s1 + j);
		j++;
	}

	j = 0;

	while (i < len)
	{
		*(t + i) = *(s2 + j);
		i++;
		j++;
	}
	*(t + i) = 0;
	return (t);
}
