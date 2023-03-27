#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*puts2 - prints every other character of a string
*@str: input string to print
*Retrun: nothing
*/


void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
}
