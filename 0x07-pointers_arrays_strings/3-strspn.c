#include "main.h"

/**
* _strspn - get the length of a prefix substring
* @s: initial segment
* @accept: substring
* Return: length
*/


unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, var = 0;
	int len;

	len = sizeof(accept);

	while (*(s + i) != 0)
	{
		var = 1;
		for (j = 0; j < len; j++)
		{
			if (*(s + i) == accept[j])
			{
				var = 0;
				break;
			}
		}
		if (var == 1)
			break;
		i++;
	}
	return (i);
}
