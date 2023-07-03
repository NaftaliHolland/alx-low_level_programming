#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - Prints all elements of a list
 *
 * @h: pointer to the head node of a linked list
 *
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
