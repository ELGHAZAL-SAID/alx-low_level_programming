#include "main.h"

/**
* *_strchr - locate a character in a string
* @s: string to search in
* @c: char to lookfor
* Return: char c
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int len = sizeof(s);

	for (i = 0; i < len; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return (0);

}
