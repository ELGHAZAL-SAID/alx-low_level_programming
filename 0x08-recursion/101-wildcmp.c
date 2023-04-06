#include "main.h"

/**
* wildcmp - compare 2 strings and returns 1 if its identical
* @s1: string to check
* @s2: the pattern
* Return: 1 if s1 and s2 are identical, else 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == 0)
		return (*s1 == 0);
	if (*s2 == *s1)
		return (*s1 != 0 && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != 0 && wildcmp(s1 + 1, s2)));
	return (0);
}
