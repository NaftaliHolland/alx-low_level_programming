#include "main.h"

/**
 * _pow_recursion - Returns the value of a number raised to a given number
 *
 * @x: Number to be raised to a given number
 * @y: The power the number is raised to
 *
 * Return: int
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
