#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: string one
* @s2: string two
* Return: return concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0, k = 0;
	char *t;

	if (s1 != 0)
		while (*(s1 + i) != 0)
			i++;
	else
		i = 0;

	len = i;

	if (s2 != 0)
		while (*(s2 + j) != 0)
			j++;
	else
		j = 0;

	len += j;

	t = malloc(len + 1);

	if (i == 0 && j == 0)
		return (0);

	if (!t)
		return (0);

	while (k < i)
	{
		t[k] = s1[k];
		k++;
	}
	while (j >= 0)
	{
		t[len] = s2[j];
		j--;
		len--;
	}
	return (t);
}
