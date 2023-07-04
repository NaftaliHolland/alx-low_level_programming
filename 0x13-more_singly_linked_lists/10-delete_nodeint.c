#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given index
 *
 * @head: pointer to a pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			if (temp == NULL)
				return (-1);
			temp = temp->next;
		}
		to_delete = temp->next;
		temp->next = to_delete->next;
		free(to_delete);
	}

	return (1);
}
