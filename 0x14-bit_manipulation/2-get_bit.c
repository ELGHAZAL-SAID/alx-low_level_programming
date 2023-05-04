#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index of the bit
 * @n: number to convert
 * Return: bit at the given index
*/

int get_bit(unsigned long int n, unsigned int index)
{

if (n > 63)
return (-1);
return ((n >> index) & 1);
}
