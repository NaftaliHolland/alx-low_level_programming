#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - searched for a value in an array of integers
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
