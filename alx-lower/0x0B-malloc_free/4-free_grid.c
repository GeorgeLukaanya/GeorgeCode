#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: the two dimesnsional grid
 * @height: height of grid
 *
 * Return: nothing
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
