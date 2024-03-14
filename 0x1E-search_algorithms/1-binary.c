#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_search - searches for a value in  a sorted array using Binary search
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start, end, i;

	if (array == NULL || size < 1)
		return (-1);

	for (start = 0, end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
