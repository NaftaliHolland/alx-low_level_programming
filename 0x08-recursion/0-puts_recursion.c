#include "main.h"
/**
 * _puts_recursion - Entry  point
 * Description:Prints a string
 * @s:Input
 * Return:void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
