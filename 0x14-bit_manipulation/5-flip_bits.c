#include "main.h"

/**
 * flip_bits - checks number of bits to be fliped to get a number
 *
 * @n: Change from
 * @m: change to
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b, i = 0;

	while ((n != 0) | (m != 0))
	{
		a = n & 1;
		b = m & 1;

		if (a != b)
			i++;
		n >>= 1;
		m >>= 1;
	}

	return (i);
}
