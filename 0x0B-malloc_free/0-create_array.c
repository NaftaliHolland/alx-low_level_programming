#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it to a value
 *
 * @size: Size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to a char
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size <= 0)
		return (NULL);

	s = malloc((sizeof(char) * size));
	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
