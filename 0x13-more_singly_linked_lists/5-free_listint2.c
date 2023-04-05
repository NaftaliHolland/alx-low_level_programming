#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Recursively frees a linked list
 *
 * @head: Pointer to head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	
	free_listint2(&((**head).next));
	free(*head);
	*head = NULL;
}
