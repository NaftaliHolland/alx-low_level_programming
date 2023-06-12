#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copies a string to a new space in memory
 *
 * @str: string to be copied
 *
 * Return: a pointer to a char
 *
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	i++;

	dup = malloc((sizeof(char) * i));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';

	return (dup);
}


