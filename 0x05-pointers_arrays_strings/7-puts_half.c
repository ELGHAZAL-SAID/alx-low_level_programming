#include "main.h"
#include <stdio.h>

/**
*puts_half - print half of a string
*@str: input to print
*Return: nothing
*
*/

void puts_half(char *str)
{
	int i, len =_strlen(str) / 2;

	for (i = 0; i < len; i++)
		printf("%c", str[i]);
	printf("\n");
}

