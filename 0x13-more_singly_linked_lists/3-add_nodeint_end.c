#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node at the end of list
 *
 * @head: pointer to a pointer to the head node
 * @n: integer to be assigned to the node
 *
 * Return: pointer to the new node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		new->n = n;
		new->next = NULL;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
