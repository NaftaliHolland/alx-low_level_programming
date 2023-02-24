#include "main.h"
/**
 * print_number - Entry point
 * Description:Prints an integer
 * @n:Integer that is printed
 * Return:Void
 */
void print_number(int n)
{
	if (n > 9)
	{
		int f = n / 10;
		int l = n % 10;
		if (l < 0)
			l *= -1;
		_putchar(f + '0');
		_putchar(l + '0');
	}
	else
		_putchar(n +'0');
}
