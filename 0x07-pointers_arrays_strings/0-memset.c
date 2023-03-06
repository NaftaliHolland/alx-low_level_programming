#include "main.h"
/**
 * _memset - Entry point
 * Description: Fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Returns: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
