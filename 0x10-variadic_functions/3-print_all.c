#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 *
 * @format: A list of arguments passed to the function
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	char *myFormat;
	va_list ap;
	int i;

	if (format == NULL)
		return;
	myFormat = (char *)format;
	va_start(ap, format);
	i = 0;
	while (myFormat[i])
		i++;
	while (i > 0)
	{
		switch (*myFormat)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				break;
			default:
				break;
		}

		if (i != 1)
			printf(", ");
		i--;
		myFormat++;
	}
	va_end(ap);
	printf("\n");
}

