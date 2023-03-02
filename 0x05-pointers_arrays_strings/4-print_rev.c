#include "main.h"
/**
 * print_rev - entry point
 * Description: Prints string in reverse
 * @s:input
 * Return:void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
