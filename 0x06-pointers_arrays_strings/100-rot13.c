#include "main.h"

/**
* *rot13 - encoding a string using rot13
* @str: string to encode
* Return: str
*/


char *rot13(char *str)
{
	int i = 0, j = 0;

	char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while(*(str + i) != 0)
	{
		for (j = 0; *(chars + j); j++)
		{
			if (*(str + i) == *(chars + j))
				*(str + i) = *(rot13 + j);
		}
		i++;
	}
	return (str);
}
