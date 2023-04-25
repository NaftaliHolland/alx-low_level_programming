#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	const char *hold;
	const char *p = format;
	
	va_start(ap, format);
	while (*p != '\0')
	{
		switch(*p)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;

			case 's':
				hold = va_arg(ap, char*);
				if (hold == NULL)
					printf("nil");
				printf("%s", hold);
				break;

			case 'f':
				printf("%f", va_arg(ap, double));
				break;

			default:
				break;
		}
		p++;
	}
	va_end(ap);
	printf("\n");
}
