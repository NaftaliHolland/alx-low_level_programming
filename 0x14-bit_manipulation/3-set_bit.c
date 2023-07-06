#include "main.h"

/**
 * set_bit - sets bit to one at a given index
 *
 * @n: pointer to the integer to be changed
 * @index: index to be set to one
 *
 * Return: 1 if it worked -1 if it failed
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
