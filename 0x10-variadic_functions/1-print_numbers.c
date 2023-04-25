#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers passed to it
 *
 * @separator: Printed between numbers
 * @n: Number of numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	unsigned int hold;
	
	va_start(ap, n);
	while (i < n)
	{
		hold = va_arg(ap, int);
		if ((i == (n-1)) | (separator == NULL))
			printf("%d", hold);
		else
			printf("%d%s", hold, separator);

		i++;
	}

	va_end(ap);
}
