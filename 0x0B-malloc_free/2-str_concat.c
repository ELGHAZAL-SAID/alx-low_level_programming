#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: string one
* @s2: string two
* Return: return concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0, k = 0, l = 0;
	char *t;

	if (s1 != 0)
		while (*(s1 + i) != 0)
			i++;
	len = i;

	if (s2 != 0)
		while (*(s2 + j) != 0)
			j++;
	len += j;

	t = malloc(len + 1);

	if (!t)
		return (0);

	while (k < i)
	{
		t[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		t[k] = s2[l];
		k++;
		l++;
	}
	return (t);
}
