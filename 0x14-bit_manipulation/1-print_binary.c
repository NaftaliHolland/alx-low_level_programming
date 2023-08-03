#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: number to be represented
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	bit = (n & 1) + '0';
	print_binary(n >> 1);
	_putchar(bit);
}
