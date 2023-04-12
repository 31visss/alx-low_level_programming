#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int o;

	for (o = 0; o < height; o++)
		free(grid[o]);
	free(grid);
}
