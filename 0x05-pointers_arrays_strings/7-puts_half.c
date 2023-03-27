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
	int i,len;

	if (len % 2 == 0)
		len = strlen(str) / 2;
	else
		len = strlen(str) / 2 + 1
	for (i = len; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");
}

