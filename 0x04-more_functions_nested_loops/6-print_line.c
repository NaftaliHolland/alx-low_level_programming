#include "main.h"
/**
 * print_line - Entry point
 * Description:Prints a straight line on the terminal
 * @n:Number of times the character _
 * return:void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
