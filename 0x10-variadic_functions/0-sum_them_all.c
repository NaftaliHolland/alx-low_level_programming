#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Adds all it's parameters
 *
 * @n: Number of parameters to be passed
 *
 * Return: Sum of all the parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

