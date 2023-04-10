#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets a bit at a given index to 1
 *
 * @n: Pointer to value
 * @index: Index to be changed
 *
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	*n |= (1 << index);

	return (1);
}
