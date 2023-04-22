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
	
	va_start(ap, n);
	while (i < n)
	{
		if ((i == (n-1)) | (separator == NULL))
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);

		i++;
	}

	va_end(ap);
}
