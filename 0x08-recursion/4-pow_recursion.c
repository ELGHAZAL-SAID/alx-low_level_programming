#include "main.h"

/**
* _pow_recursion - calculate the value of x raised to the power of y
* @x: the base
* @y: the power
* Return: value of the power
*/


int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
	return (-1);
}
