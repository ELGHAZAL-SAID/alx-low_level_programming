#include "main.h"

/**
* *leet - encodes a string into 1337
* @s: string to encode
* Return: encoded string s
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char t[] = {97, 101, 111, 108, 116};
	char f[] = {52, 51, 49, 48, 55};

	while (*(s + i) != 0)
	{
		for (j = j; j < 5; j++)
		{
			if (*(s + i) == t[j] || *(s + i) == t[j] - 32)
			{
				*(s + i) = f[j];
			}
		}
		i++;
	}

	return (s);

}
