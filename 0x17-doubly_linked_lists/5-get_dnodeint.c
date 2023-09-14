#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets the nth node in a dlistint_t linked list
 *
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 *
 * Return: the nth node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++, temp = temp->next)
	{
		if (temp == NULL)
			return (NULL);
	}

	return (temp);
}
