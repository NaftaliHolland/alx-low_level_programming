#include "main.h"
/**
 * _strchr - Entry point
 * Description:finds a character
 * @s:input
 * @c:input
 * Return:pointer
 */

char *_strchr(char *s, char c)
{
	int i, index;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			index++;
			break;
		}
	}
	return (s + i);
}
