#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: number to flip
 * @m: number to flip with
 * Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
int a;

a = n ^ m;

while (a != 0)
{

if (a & 1)
i++;
a = a >> 1;
}

return (i);
}
