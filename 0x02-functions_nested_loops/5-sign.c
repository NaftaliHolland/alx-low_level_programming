#include "main.h"
/**
 * print_sign - Entry point
 * Description:Prints the sign of a number
 * @n:the integer it recieves
 * Return:integer
 */
int print_sign(int n)
{
	int s = n;

	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (s <  0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
