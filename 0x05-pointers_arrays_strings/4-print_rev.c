#include <stdio.h>
#include <string.h>

/**
*print_rev - print string in reverse
*@s: string to print
*Return: always 0
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
