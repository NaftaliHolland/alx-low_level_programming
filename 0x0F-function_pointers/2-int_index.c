#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 *
 * @array: Array to be checked
 * @size: size of the array
 * @cmp: Pointer to comparison function
 *
 * Return: int
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
