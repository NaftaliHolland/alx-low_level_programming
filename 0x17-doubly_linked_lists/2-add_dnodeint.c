#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a node at the beginning of a list
 *
 * @head: pointer to a pointer to the head node
 * @n: integer data to be contained in the node
 *
 * Return: address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	/* allocate memory for a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* create the new node */
	new->next = *head;
	new->prev = NULL;
	new->n = n;

	/* make the previous head node point to the new node */
	if (*head != NULL)
		(*head)->prev = new;

	/* make the new node the head */
	*head = new;

	return (new);
}
