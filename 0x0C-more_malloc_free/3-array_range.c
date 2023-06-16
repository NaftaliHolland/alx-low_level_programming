#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: The minimum number to be included in thr array
 * @max: Maximum number in the array
 *
 * Return: Pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (; min <= max; min++, i++)
	{
		array[i] = min;
	}
	return (array);

}
