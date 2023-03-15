#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free a 2 dimensional grid created by 'alloc_grid' function.
 * @grid: the 2 dimensional grid 
 * @height: the height of the grid (type int).
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
