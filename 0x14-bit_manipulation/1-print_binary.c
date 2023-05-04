#include "main.h"

/**
 * print_binary - print a binary number
 * @n: number ot convert
 * Return: none
*/

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
