#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_strcpy - copy string from a var to distination
* @src: to copy form
* @dest: to copy to
* Return: dest
*/


char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
