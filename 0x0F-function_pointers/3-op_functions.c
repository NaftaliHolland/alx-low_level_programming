#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - Returns sum of inputs
 *
 * @a: First input
 * @b: Second input
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of inputs
 *
 * @a: First input
 * @b: Second input
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Returns product of inputs
 *
 * @a: First input
 * @b: Second input
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of a by b
 *
 * @a: First input
 * @b: Second input
 *
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of a by b
 *
 * @a: First input
 * @b: Second input
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
