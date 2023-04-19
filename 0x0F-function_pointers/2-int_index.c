#include "function_pointers.h"


/**
* int_index - searches for an integer
* @array: array to search in
* @size: array size
* @cmp: Pointer to a function to use to compare vls
* Return: index of the mached element
*or -1 if no match or size < 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || size < 0 || array == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
