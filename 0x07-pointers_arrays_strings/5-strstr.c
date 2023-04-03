#include "main.h"


/**
* *_strstr -  locates a substring.
* @haystack: the string to search in
* @needle: the string to search for
* Return: the beginning of the located substring.
*/


char *_strstr(char *haystack, char *needle)
{
	int i;

	do {
		for (i = 0; *(needle + i) != 0; i++)
		{
			if (*haystack == *(needle + i))
				return (haystack);
		}
	} while (*haystack++);
	return(0);
}
