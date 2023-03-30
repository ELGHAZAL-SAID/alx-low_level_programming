#include "main.h"


/**
* *cap_string - capitlize words
* @s: string
* Return: stirng
*/


char *cap_string(char *s)
{
	int i = 0, j;

	char t[] = {32, 9, 59, 10, 44, 46, 63, 33, 34, 40, 41, 123, 125};
	char *x;

	x = t;
	while (*(s + i) != 0)
	{
		for (j = 0; *(x + j); j++)
		{
			if (*(s + i) == *(x + j))
			{
				if (*(s + (i + 1)) >= 97 && *(s + (i + 1)) <= 122)
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
