#include "main.h"


/**
* *_strstr -  locates a substring.
* @haystack: the string to search in
* @needle: the string to search for
* Return: the beginning of the located substring.
*/


char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	if (*needle  == 0)
		return (haystack);

	while (*(needle + j) != 0)
	{
		for (i = 0; *(haystack + i) != 0; i++)
		{
			if (*(haystack + i) == *(needle + j))
				return (haystack + i);
		}
		j++;
	}
	return (0);
}
