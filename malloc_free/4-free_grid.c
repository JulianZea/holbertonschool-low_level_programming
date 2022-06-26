#include "main.h"

/**
 * free_grid - free an alloc grid makeit by alloc_grid
 *
 * @grid: Double pointer to a grid
 *
 * @height: Height of the grid
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
