#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 *
 * @head: Pointer to head node of a list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
		free(head);
		return;
	}
	head = (*head).next;
	free_listint(head);
}
