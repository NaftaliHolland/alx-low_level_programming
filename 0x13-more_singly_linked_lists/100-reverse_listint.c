#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 *
 * @head: Pointer to a poiter to a linked list
 *
 * Return: pointer to the head node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nnext, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	nnext = (*head)->next;
	previous = NULL;

	while (nnext != NULL)
	{
		nnext = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		if (nnext == NULL)
			*head = previous;
		else
			*head = nnext;
	}
	return (*head);
}


