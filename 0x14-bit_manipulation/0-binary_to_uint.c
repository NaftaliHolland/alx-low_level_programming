#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary string to unsigned int
 *
 * @b: string representation of the binary
 *
 * Return: Converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (b == NULL)
		return (0);

	i = 0;
	num = 0;
	while (b[i] != '\0')
		i++;

	while (i)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num += (*b - '0') << (i - 1);

		i--;
		b++;
	}

	return (num);
}
