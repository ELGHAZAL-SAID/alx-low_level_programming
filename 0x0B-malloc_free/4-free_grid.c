#include "main.h"

/**
* free_grid - free 2D array
* @grid: array to free
* @height: height of the grid
* Return: 0;
*/


void free_grid(int **grid, int height)
{
	int **t;

	if (grid != NULL && height != 0)
	{
		while (height  >= 0)
		{
			free(t[height]);
			height--;
		}
		free(t);
	}
}
