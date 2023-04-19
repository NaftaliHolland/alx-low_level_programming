#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Adds a node at a given position in a list
 *
 * @head: Pointer to the head node
 * @idx: Index of the position where the node is to be added
 * @n: Value of the new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 1;
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	(*new).n = n;

	if (new == NULL)
		return (NULL);
	while (i < idx)
	{
		if (temp == NULL)
			return (NULL);

		temp = (*temp).next;
		i++;
	}

	(*new).next = (*temp).next;
	(*temp).next = new;

	return (new);
}
