#include "main.h"
/**
 * _memset - Entry point
 * Description: Fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < (n - 1); i++)
	{
		s[i] = b;
	}
	
	return (s);
}
