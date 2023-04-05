#include "main.h"
#include <stdio.h>

/**
* _puts_recursion -print string followed by newline.
* @s: string to print
* Return: nothing
*/


void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
		return;
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}

