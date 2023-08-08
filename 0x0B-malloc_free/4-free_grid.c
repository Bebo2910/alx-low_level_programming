#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function to make grid
  * @grid: the grid to free out
  * @height: the height of the grid
  * Return: none
  */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
