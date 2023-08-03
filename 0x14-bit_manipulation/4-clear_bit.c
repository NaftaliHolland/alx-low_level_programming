#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 *
 * @n: pointer to the integer
 * @index: index of the bit to be set to 0
 *
 * Return: 1 on success -1 on failiure
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = ~*n;
	*n = ~(*n | (1 << index));

	return (1);

}
