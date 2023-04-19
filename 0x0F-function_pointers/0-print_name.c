#include "function_pointers.h"

/**
* print_name - print a name
* @name: name to print
* @f: function pointer
* Return: 0
*/


void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
