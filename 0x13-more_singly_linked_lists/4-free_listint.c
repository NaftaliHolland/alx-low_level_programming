#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 *
 * @head: pointer to the head node
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
