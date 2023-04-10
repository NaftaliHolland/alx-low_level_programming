#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a givrn index
 *
 * @n: Value
 * @index: Index of the bit to be returned
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return (n & 1);
}
