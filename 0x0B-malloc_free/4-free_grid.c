#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid.
 * @grid: The address of the two dimensional grid.
 * @height: The height of the grid.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
