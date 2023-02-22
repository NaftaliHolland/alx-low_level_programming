#include "main.h"
/**
 * times_table - Entry point
 * Description:Prints the times table
 * Return:Void
 */
void times_table(void)
{
	int r, c;

	for (r = 0; r <= 10; r++)
	{
		for (c = 0; c <= 10; c++)
		{
			char col = c * r;

			_putchar (col);
			_putchar (',');
			_putchar (' ');
		}
		_putchar ('\n');
	}
}
