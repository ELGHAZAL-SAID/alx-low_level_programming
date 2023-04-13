#include "main.h"


/**
* array_range - create array of integers
* min: min value in the array
* max: max vlue in the array
*/



int *array_range(int min, int max)
{
	int *t;
	int i = 0, val = 0;

	if (min > max)
		return (0);

	t = (int *) malloc((max - min) * sizeof(int) + 1);

	if (!t)
		return (0);

	val = min;

	for (i = 0; i <= (max - min); i++)
	{
		t[i] = val;
		val++;
	}
	return (t);
}
