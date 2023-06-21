#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Serches for an integer in an array
 *
 * @array: Array that integer is to be searched
 * @size: Size of the array
 * @cmp: Pointer to the function to be used to compare
 *
 * Return: int
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (size)
	{
		if (cmp(*array))
			return (index);

		array++;
		size--;
		index++;
	}
	return (-1);
}
