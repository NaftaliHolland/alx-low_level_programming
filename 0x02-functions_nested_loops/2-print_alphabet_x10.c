/**
 * print_alphabet_x10 - Entry point
 * Description:Prints the alphabets 10 times
 * Return:void
 */
#include "main.h"
void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}

