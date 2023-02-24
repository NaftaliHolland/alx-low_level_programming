#include "main.h"
/**
 * print_square - entry point
 * Description:Prints a aquare
 * @size:Size ofthe square
 * Return:void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int r;

		for (r = 0; r < size; r++)
		{
			int c;

			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
