#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: pointer to a pointer to the head node
 *
 * Return: node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}


