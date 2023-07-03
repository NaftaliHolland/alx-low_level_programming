#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a node at the beginning of a list
 *
 * @head: pointer to the pointer that points to the head node
 * @n: integer to be inserted in the new node
 *
 * Return: pointer to the new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

