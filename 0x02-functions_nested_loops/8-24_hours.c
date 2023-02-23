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
		int f = h / 10;
		int l = h % 10;

		_putchar (f + '0');
		_putchar (l + '0');
		_putchar (':');

		for (min = 0; min <= 60; min++)
		{
			int fmin = min / 10;
			int lmin = min % 10;

			_putchar (fmin + '0');
			_putchar (lmin + '0');
		}
	}
}
