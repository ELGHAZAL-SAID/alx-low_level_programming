#include "main.h"


/**
* reverse_array - reverse an array of integers
* @a: array to reverse
* @n: length of the array
* Return: always nothing
*/


void reverse_array(int *a, int n)
{

	int tmp = 0, i = 0, len = 0;

	len = n / 2;

	while (i < len)
	{
		n--;
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
	}
}
