#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the node at a given index
 *
 * @head: pointer to the head node of a list
 * @index: Index of the node to be rturned starting from 0
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = (*head).next;
		i++;
	}
	return (head);
}

