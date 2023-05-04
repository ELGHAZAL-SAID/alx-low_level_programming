#include "main.h"

/**
 * get_git - returns the value of a bit at a given index.
 * 
 * 
 * 
*/

int get_bit(unsigned long int n, unsigned int index)
{

if (n > 63)
return (-1);
return ((n >> index) & 1);
}