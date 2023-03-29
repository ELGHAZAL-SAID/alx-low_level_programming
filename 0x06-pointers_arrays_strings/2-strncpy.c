#include "main.h"

/**
* *_strncpy - concatinates two strings
* @dest: vat to append to
* @src: var to be appended to
* @n: number of chars to append
* Return: dest var
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);

}
