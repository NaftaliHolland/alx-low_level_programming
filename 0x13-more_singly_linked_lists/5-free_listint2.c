#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and sets the head to NULL
 *
 * @head: pointer to a pointer to the head node
 *
 * Returns: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
