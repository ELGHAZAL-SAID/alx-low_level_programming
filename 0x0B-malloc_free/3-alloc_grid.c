#include "main.h"

/**
* alloc_grid - free 2 dimensional array
* @width: width of the array
* @height: height of the array
* Return: pointer to demensional array
*/



int **alloc_grid(int width, int height)
{
	int  **t;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (0);

	t = (int **) malloc(sizeof(int *) * height);

	if (!t)
	{
		free(t);
		return (0);
	}
	else
	{
		while (i < width)
		{
			t[i] = (int *) malloc(sizeof(int *) * width);
			while (j < height)
			{
				*(*(t + i) + j) = 0;
				j++;
			}
			i++;
		}
	}
	return (t);

}
