#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked arary[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}

	return (-1);
}
