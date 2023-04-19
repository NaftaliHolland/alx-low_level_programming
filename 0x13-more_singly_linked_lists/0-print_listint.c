#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Prints all the elements in a list
 * @h: Pointer to the head node of a list
 * Return: Unsigned int
 */

size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		i++;
	}
	return (i);
}
