#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints any number of strings passed to it
 *
 * @separator: string to be printed between the strings
 * @n: Number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *hold;

	va_start(ap, n);

	while (i < n)
	{
		hold = va_arg(ap, char*);
		if (hold == NULL)
			printf("nil");
		printf("%s", hold);
		if (i != n-1)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
}
