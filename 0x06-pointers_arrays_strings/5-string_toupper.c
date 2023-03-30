#include "main.h"

/**
* *string_toupper - lower-case letters to upper-case
* @a: string
*Return: upper-case string
*/

char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != 0)
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
			*(a + i) = *(a + i) - 32;
		i++;
	}
	return (a);
}
