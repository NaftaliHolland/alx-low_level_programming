#include "main.h"

/**
 * get_root - Returns the square root of a number
 *
 * @n: Input number
 * @guess: Guess of the root
 *
 * Return: int
 *
 */

int get_root(int n, int guess)
{
	if (n == 1)
		return (1);
	else if (guess <= 0)
		return (-1);
	else if (n == guess * guess)
		return (guess);
	return (get_root(n, guess - 1));
}
/**
 * _sqrt_recursion - returns the square root of a number using recursion
 *
 * @n: Number to get square root
 *
 * Return: Int
 *
 */

int _sqrt_recursion(int n)
{
	int guess = (n / 2);

	return (get_root(n, guess));
}
