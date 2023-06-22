#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers passed to it as parameters
 *
 * @separator: String to be printed between the numbers
 * @n: Number of intergers passed as parameters
 *
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n <= 0)
		return;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	printf("\n");

}
