#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to the int
 * @index: index to be set to 1
 *
 * Return: 1 on success -1 on failure
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
