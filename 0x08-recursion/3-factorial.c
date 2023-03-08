#include "main.h"
/**
 * factorial - Entry point
 * Description:Returns factorial
 * @n:input
 * Return:int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
