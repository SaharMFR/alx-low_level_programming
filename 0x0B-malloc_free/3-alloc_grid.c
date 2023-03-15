#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Create 2 dimensional array of integers
 * and each element of the grid should be initialized to '0'.
 * @width: type int.
 * @height: type int.
 * Return: pointer to the array , NULL of failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (((width + height) < 2) || (width < 1) || (height < 1))
		return (NULL);

	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
