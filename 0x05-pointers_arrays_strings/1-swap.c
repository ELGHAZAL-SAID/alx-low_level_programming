#include "main.h"

/**
*swap_int - swap two integers
*@a: integer 1 to swap
*@b: integer 2 to swap
*Return: always 0
/


void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = b;
	*b = c;

}

