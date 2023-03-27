#include <stdio.h>
#include <string.h>

/**
*print_rev - print string in reverse
*
*@s: string to print
*
*Return: always 0
*/

void print_rev(char *s)
{
	int i;
	int len = strlen(s);
	char *str;

	str = s;

	for (i = len - 1, j = 0; i >= 0 && j < len; i--, j++)
	{
		s[i] = str[j];
	}
	printf("\n");
}
