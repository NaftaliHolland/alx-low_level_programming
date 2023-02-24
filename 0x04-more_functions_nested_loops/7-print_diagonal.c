#include "main.h"
/**
 * print_diagonal - Entry point
 * Description:Prints a diagonal on the terminal
 * @n:Number of times \ is to be  printed
 * Return:void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int s;

			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i != n)
			_putchar('\n');
		}
	}
	_putchar('\n');
}
