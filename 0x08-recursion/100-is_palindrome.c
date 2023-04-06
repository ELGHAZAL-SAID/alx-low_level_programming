#include "main.h"
#include <stdio.h>

/**
* is_palindrome - check if a string is a palindrome
* @s: string to check
* Return: 1 if palindrome, 0 if not.
*/


int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (len < 2)
		return (0);
	return (_palindrome(0, len, s));
}


/**
* _palindrome - check if a string is a palindrome
* @string: string to check
* @start: start of the string
* @end: end of the string
* Return: 1 if palindrome, 0 if not.
*/


int _palindrome(int start, int end, char *string)
{
	if (start == end || start - 1 == end)
		return (1);
	else if (string[start] == string[end])
		return (_palindrome(start + 1, end - 1, string));
	return (0);
}

/**
* _strlen_recursion - print string length
* @s: string
* Return: length of the string
*/

int _strlen_recursion(char *s)
{

	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}


