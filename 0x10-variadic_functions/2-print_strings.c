#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings
 *
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 *
 * Return: void
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (n <= 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (separator == NULL || i == n - 1)
			printf("%s", s);
		else if (s == NULL)
			printf("(nil)");
		else
			printf("%s%s", s, separator);
	}
	printf("\n");
}
