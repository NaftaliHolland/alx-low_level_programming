#include "main.h"
/**
 * swap_int - Entry point
 * Description: swaps two integers
 * @a:input
 * @b:input
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
