#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: the binary number to convert
* Return: converted number of 0 if b if not 0 or 1 or b is null.
*/

	unsigned int binary_to_uint(const char *b)
	{
	int i = 0, pow = 1;
	int handler = 0;

	if (b == 0)
	return (0);

	while (b[i] != 0)
	{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	i++;
	}
	for (; i > 0; i--)
	{
	handler += (b[i - 1] - '0') * pow;
	pow *= 2;
	}
return (handler);
}
