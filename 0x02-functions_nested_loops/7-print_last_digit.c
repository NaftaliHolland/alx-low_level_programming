#include "main.h"
/**
 *  print_last_digit - Entry point
 *  Description:Prints thar last digit of a nunmber
 *  @n:The integer it takes as an argument
 *  Return:Int
 */
int print_last_digit(int n)
{
	char l = n % 10;

	_putchar(l);
	return (0);
}
