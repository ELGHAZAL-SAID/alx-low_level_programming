#include "main.h"

/**
* free_grid - free 2D array
* @grid: array to free
* @height: height of the grid
* Return: 0;
*/


void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height  >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
