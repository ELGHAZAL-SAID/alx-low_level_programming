#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion -print string in reverse followed by newline.
* @s: string to print
* Return: nothing
*/


void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}

