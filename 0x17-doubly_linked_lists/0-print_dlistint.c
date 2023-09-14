#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of dlistint_t
 *
 * @h: pointer to the head node
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);

	number_of_nodes = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
