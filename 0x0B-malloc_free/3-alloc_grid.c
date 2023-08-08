#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - function to make grid
  * @width: width of grid
  * @height: the height of grid
  * Return: 0 or grid
  */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	*grid = malloc(height * sizeof(int));
	grid = malloc(width * sizeof(int));

	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
