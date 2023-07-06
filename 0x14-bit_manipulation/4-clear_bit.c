#include "main.h"

/**
 * clear_bit - changes a bit to 0 at a given index
 *
 * @n: pointer to the number to be changed
 * @index: index of bit to be changed
 *
 * Return: 1 if it worked, -1 if it failed
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = ~(*n) | (1 << index);
	*n = ~(*n);

	return (1);
}
