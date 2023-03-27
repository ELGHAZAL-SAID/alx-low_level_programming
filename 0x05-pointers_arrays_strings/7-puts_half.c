#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - print half of a string
*@str: input to print
*Return: nothing
*
*/

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = len / 2; i < len; i++)
		printf("%c", str[i]);
	printf("\n");
}

