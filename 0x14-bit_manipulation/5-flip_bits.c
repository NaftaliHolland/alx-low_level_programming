#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - gets number of bits that need to be changed to get from m to n
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped to get from n to m
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips;

	flips = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			flips++;
		n >>= 1;
		m >>= 1;
	}

	return (flips);

}
