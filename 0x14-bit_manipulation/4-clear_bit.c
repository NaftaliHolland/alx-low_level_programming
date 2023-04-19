#include "main.h"
/**
 * clear_bit - Sets a bit to 0
 *
 * @n: pointer to the value to be changed
 * @index: Index where the bit is to be changed
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if (*n & (1 << index))
		*n ^= (1 << index);
	return (1);
}
