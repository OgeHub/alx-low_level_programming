#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of grid
 * Free 2 dimentional grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
