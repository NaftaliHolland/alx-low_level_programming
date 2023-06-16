#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string to be concatenated
 * @s2: Second string
 * @n: Number of bytes of s2 to be concatenated
 *
 * Return: Pointer to the new string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = 0, i = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size])
		size++;

	new_string = malloc(sizeof(char) * (size + n + 1));
	if (new_string == NULL)
		return (NULL);

	size = 0;
	while (s1[i])
	{
		new_string[size] = s1[i];
		i++;
		size++;
	}

	i = 0;
	while (n)
	{
		new_string[size] = s2[i];
		n--;
		size++;
		i++;
	}

	new_string[size++] = '\0';

	return (new_string);

}
