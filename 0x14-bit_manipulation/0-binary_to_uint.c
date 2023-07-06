#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - Convets binary to an unsigned integer
 *
 * @b: pointer to a string of 0s and 1s
 *
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value, i;

	if (b == NULL)
		return (0);
	i = 0;
	value = 0;
	while (b[i] != '\0')
		i++;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		value += ((*b - '0') << (i - 1));
		i--;
		b++;
	}

	return (value);
}
