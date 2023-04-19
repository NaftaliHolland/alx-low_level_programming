#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _power - raises 2 to the power of the given parameter
 * Description: Assumes that the numbers passed to it will all be unigned ints
 * @raiseTo: Thepower of that 2 is to be raised to
 *
 * Return: Unsigned int
 */

unsigned int _power(unsigned int raiseTo)
{
	if (raiseTo == 0)
		return (1);
	return (2 * _power(raiseTo - 1));
}

/**
 * binary_to_uint - Changes a binary number to an unsigned int
 *
 * @b: aapointer to a string of 0s and 1s
 *
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, i = 0;

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum += (unsigned int)(b[i] - '0') * _power(len - (i + 1));
	}

	return (sum);

}
