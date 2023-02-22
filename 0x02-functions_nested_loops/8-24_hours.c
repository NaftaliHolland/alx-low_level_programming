#include "main.h"
/**
 * jack_bauer - Entry point
 * Description:Prints every minute from 00:00 to 23:59
 * Return:Void
 */
void jack_bauer(void)
{
	int h, min;

	for (h = 0; h <= 23; h++)
	{
		char f = h / 10;
		char l = h % 10;

		_putchar (f);
		_putchar (l);
		_putchar (':');

		for (min = 0; min <= 60; min++)
		{
			char fmin = min / 10;
			char lmin = min % 10;

			_putchar (fmin);
			_putchar (lmin);
		}
	}
}
