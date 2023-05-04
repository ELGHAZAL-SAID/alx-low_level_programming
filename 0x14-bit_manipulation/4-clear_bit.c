#include "main.h"

/**
 * clear_bit - set the bit 0 at given position
 * @index: position of the bit to set
 * @n: pointer to digit
 * Return: 1 if works -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);

*n &= ~(1 << index);
return (1);
}
