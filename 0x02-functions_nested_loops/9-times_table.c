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
			int col = c * r;

			_putchar (col + '0');
			_putchar (',');
			_putchar (' ');
		}
		_putchar ('\n');
	}
}
