#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to the new concatenated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *newString;

	if (s1  == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] || s2[i])
		i++;

	newString = malloc((sizeof(char) * i));
	if (newString == NULL)
		return (NULL);

	i = 0;

	while (s1[i])
	{
		newString[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		newString[i] = s2[j];
		i++;
		j++;
	}


	return (newString);
}
