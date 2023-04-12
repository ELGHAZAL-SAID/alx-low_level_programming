#include "main.h"
/**
* alloc_grid - free 2 dimensional array
* @width: width of the array
* @height: height of the array
* Return: pointer to demensional array
*/
int **alloc_grid(int width, int height)
{
	int  **t, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (0);
	t = (int **) malloc(sizeof(int *) * height);
	if (t != 0)
	{
		while (i < height)
		{
			t[i] = (int *) malloc(sizeof(int) * width);
			if (t[i] == 0)
			{
				while (i >= 0)
				{
					free(t[i]);
					i--;
				}
				free(t);
				return (0);
			}
			i++;
		}
		i = 0;
		while (i < width)
		{
			while (j < height)
			{
				*(*(t + i) + j) = 0;
				j++;
			}
			i++;
		}
	}
	else
	{
		free(t);
		return (0);
	}
	return (t);

}
