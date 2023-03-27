#include <stdio.h>
#include <string.h>
/**
*print_rev - print string in reverse
*@s: string to print
*Return: always 0
*/

void (char *s)
{
	int i;
	char t[] = s;

	for (i = strlen(t) - 1; i >= 0; i--)
	{
		printf("%s", t[i]);
	}
	printf("/n");
}
