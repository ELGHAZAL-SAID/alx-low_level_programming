#include <stdio.h>
#include <string.h>

/**
*rev_string - print string in reverse
*@s: string to reverse
*Return: always 0
*/

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = strlen(s) - 1, j = 0; i >= 0 && j < strlen(s); i--, j++)
	{
		c = s[i]
		s[j] = s[i];
	}
	printf("\n");
}

