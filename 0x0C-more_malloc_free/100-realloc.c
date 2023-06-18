#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Realocates a block of memory using malloc
 *
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated memory of ptr
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to the newly allocated memory
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size <= 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	else if (ptr == NULL)
		return (new_ptr);

	i = 0;

	while (((char *)ptr)[i])
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
