#include "main.h"
/**
 * _memcpy - Enry point
 * Description: copies memory data
 * @dest:input
 * @src:input
 * @n:input
 * Return:pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
