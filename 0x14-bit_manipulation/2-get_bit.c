#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the number
 * @index: index to be checked
 *
 * Return: the value at that bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= 32)
		return (-1);

	i = n & 1 << index;
	i = i >> index;

	return (i);
}
