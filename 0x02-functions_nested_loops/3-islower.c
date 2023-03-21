#include "mian.h"

/*
*_islower - check if an alphabet is lower
*
*Return: return 0 or 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

