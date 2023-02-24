#include "main.h"
/**
 * print_triangle - Entry point
 * @size:Size of triangle
 * Description:Prints a triangle
 * Return:void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int r;

		for (r = 0; r < size; r++)
		{
			int c;

			for (c = size - 1; c >= 0; c--)
			{
				if (c > r)
					_putchar(' ');
				else
					_putchar('#');
			}
			if (r != size)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
