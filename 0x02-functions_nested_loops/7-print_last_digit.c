#include "main.h"
/**
 *  print_last_digit - Entry point
 *  Description:Prints thar last digit of a nunmber
 *  @n:The integer it takes as an argument
 *  Return:Int
 */
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar (l + '0');
	return (0);
}
