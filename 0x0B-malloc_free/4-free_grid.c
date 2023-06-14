#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2d array
 *
 * @grid: Pointer to the 2d array to be freed
 * @height: The number of 1dimesional arrays to be freed
 *
 * Return: void
 *
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
