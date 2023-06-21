#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Excecutes a function on each element of an array
 *
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to perform on each element
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size <= 0 || action == NULL)
		return;
	while (size)
	{
		action(*array);
		array++;
		size--;
	}
}
