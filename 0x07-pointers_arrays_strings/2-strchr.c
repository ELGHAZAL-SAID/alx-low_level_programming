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
	int check = 0;
	
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			check = 1;
			break;
		}
		i++;
	}
	if (check == 1)
		return (s + i);
	else
		return (0);

}
