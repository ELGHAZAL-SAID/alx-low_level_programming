#include "main.h"

/**
* _strspn - get the length of a prefix substring
* @s: initial segment
* @accept: substring
* Return: length
*/


unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	while (*(s + i) != 0)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
			{
				count++;
				break;
			}
			else if (*(accept + (j + 1)) == 0)
				return (count);
		}
		i++;
	}
	return (count);

}
