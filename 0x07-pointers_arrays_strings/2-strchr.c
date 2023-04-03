#include "main.h"

/**
* *_strchr - locate a character in a string
* @s: string to search in
* @c: char to lookfor
* Return: char c
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = 0;

	while (*(s + len) != 0)
		len ++;

	for (i = 0; i < len; i++)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}

	}
	return (0);
}
