#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to be checked
 * @index: index to of bit to be checked
 *
 * Return: the valit of the bit at index or -1 on failure
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
