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
	char T[] = *s;

	for (i = strlen(T) - 1; i = 0; i--)
	{
		puts(T[i]);
	}
}
