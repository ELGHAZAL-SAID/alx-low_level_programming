#include "function_pointers.h"

/**
* array_iterator - executes a function given
* as a parameter on each element of an array
* @array: the array
* @size: array size
* @action: pointer function to use
* Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

