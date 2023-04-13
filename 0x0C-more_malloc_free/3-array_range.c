#include "main.h"


/**
* array_range - create array of integers
* min: min value in the array
* max: max vlue in the array
*/



int *array_range(int min, int max)
{
	int *t;
	int i = 0, num = 0;

	if (min > max)
		return (0);

	t = (int *) malloc((max - min) * sizeof(int));

	if (!t)
		return (0);

	while (min <= max)
	{
		num = min;
		t[i] = num;
		min = num + 1;
		i++;
	}

	return (t)
}
