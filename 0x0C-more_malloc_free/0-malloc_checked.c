#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: Size in bytes of memory to be allocated
 *
 * Return: Pointer to allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
