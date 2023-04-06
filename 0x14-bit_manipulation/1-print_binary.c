#include "main.h"
#include <stdlib.h>
/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Number to be converted
 *
 * Return:Void
 */

void print_binary(unsigned long int n)
{
	/**
	 *@all_bits: hexadecimal representation of the lesft most bit
	 * @one: a variable that will tell if 1 has been encountered
	 */
	unsigned int all_bits = 0x80000000;
	int one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (all_bits > 0)
	{
		if ((n & all_bits) != 0)
			one = 1;
		if (one == 1)
		{
			if ((n & all_bits) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
		/**
		 * Update all_bits to move to the next bit
		 */
		all_bits >>= 1;
	}
}
