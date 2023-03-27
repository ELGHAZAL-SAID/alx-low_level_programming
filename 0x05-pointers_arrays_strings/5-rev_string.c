#include <stdio.h>
#include <string.h>

/**
*print_rev - print string in reverse
*
*@s: string to print
*
*Return: always 0
*/

void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s);
	char str;

	while (len > i)
	{
		len--;
		str = s[len];
		s[len] = s[i];
		s[i] = str;
		i++;
	}

}
