#include "main.h"

/**
* _strcmp - compere two strings
* @s1: first string
* @s2: second string
* Return: 0, 15 or -15
*/

int _strcmp(char *s1, char *s2)
{

	int ls1 = 0, ls2 = 0, i = 0;

	while (*(s1 + ls1) != 0)
		ls1++;

	while (*(s2 + ls2) != 0)
		ls2++;

	if (ls1 > ls2)
		return (15);
	else if (ls2 > ls1)
		return (-15);
	else
		return (0);
}

