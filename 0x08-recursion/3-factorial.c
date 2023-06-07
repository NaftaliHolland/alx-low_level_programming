#include "main.h"

/**
 * factorial(int n) - Returns the factorial of a number
 *
 * @n: Input number
 *
 * Return: int
 *
 */

int factorial(int n)
{
	if (n < 0)
		return(-1);
	else if (n == 0)
		return (1);
	return(n * (factorial(n -1)));
}
