#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * argstostr - A function that concatenates it's inputs
 *
 * @ac: Number of inputs
 * @av: Array of input strings
 *
 * Return: Pointer to the new string
 *
 */

char *argstostr(int ac, char **av)
{
	int len, track_ac, j;
	char *new_string;

	if (ac == 0 || *av == NULL)
		return (NULL);
	len = 0;
	for (track_ac = 0; track_ac < ac; track_ac++)
	{
		j = 0;
		while ((av[track_ac][j]) != '\0')
		{
			j++;
			len++;
		}
	}
	/* add ac to accomodate the new line characters*/
	len += ac;
	new_string = (malloc(sizeof(char) * (len + 1)));
	if (new_string == NULL)
		return (NULL);

	len = 0;
	for (track_ac = 0; track_ac < ac; track_ac++)
	{
		j = 0;
		while ((av[track_ac][j]) != '\0')
		{
			new_string[len] = av[track_ac][j];
			j++;
			len++;
		}
		new_string[len++] = '\n';
	}
	return (new_string);
}
