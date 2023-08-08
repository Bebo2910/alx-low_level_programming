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

	grid = malloc(height * sizeof(*grid));
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (0);
	}

	for (; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (0);
		}

		for (; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
