#include "main.h"

/**
*_isupper - check if a char is upper
*@c: character to check
*Return: 1 if upper, esle 0
*/

int _isupper(char c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
