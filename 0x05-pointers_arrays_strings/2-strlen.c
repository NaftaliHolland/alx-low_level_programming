#include "main.h"
/**
 * _strlen - Entry point
 * Description:Returns the length of a string
 * @s:input
 * Return:int
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
