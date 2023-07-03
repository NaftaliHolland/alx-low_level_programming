#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a given index
 *
 * @head: pointer to the head node
 * @index: index of the node to be returned
 *
 * Return: pointer to the found node
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	return (temp);
}

