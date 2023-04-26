#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each alement of an array
 *
 * @array: Array to be operated on
 * @action: Pointer to function
 * @size: Size of the array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);

		i++;
	}
}
