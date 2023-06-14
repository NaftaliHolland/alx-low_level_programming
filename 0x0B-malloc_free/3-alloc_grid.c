#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2d array and initializes each value to a zero
 *
 * @width: width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the 2d array
 *
 */

int **alloc_grid(int width, int height)
{
	int **my2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my2d = malloc((sizeof(int *) * height));
	if (my2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		my2d[i] = malloc((sizeof(int) * width));
		if (my2d[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			my2d[i][j] = 0;
		}
	}

	return (my2d);
}
