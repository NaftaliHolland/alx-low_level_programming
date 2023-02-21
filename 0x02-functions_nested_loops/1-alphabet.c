#include "main.h"
/**
 * print_alphabet - entry point
 * Description:Prints alphabets in lowercase
 * Returnn:void
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
