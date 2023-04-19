#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b:Input
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *ad = malloc(b);

	if (ad == NULL)
		exit(98);
	return (ad);
}
