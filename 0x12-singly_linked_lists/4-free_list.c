#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - Frees a list list_t
 *
 * @head: Pointer to the head node of a list
 *
 * Return: void
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
