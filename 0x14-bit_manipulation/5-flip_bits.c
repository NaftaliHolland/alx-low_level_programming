#include "main.h"

/**
 * flip_bits - gets number of bits that need to be fliped
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, xor;
	if (n == m)
		return (0);

	xor =  n ^ m;
	i = 0;

	while (xor > 0)
	{
		if ((xor & 1) == 1)
			i++;
		xor = xor >> 1;
	}

	return (i);
}
