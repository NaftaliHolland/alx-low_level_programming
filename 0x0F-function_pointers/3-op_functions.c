#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - Adds two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 *
 * Return: Sum of the two integers
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: First int
 * @b: second int
 *
 * Return: Deference of a and b
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: First int
 * @b: Secind int
 *
 * Return: Product of a and b
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 *
 * @a: First integers
 * @b: Second int
 *
 * Return: Result of the division of a and b
 *
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Remainder of a division
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder after dividing a and b
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
