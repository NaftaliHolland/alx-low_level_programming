#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to a pointer to the head node
 * @n: integer value to be inserted into the node
 *
 * Return: address of the new element, or NULL if failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	temp = *head;

	/* allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (temp != NULL)
	{
		/* loop that gets to the last node */
		while (temp->next != NULL)
			temp = temp->next;

		new->prev = temp;
		/*make the tail point to the new tail */
		temp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	/* innitialize the remaining node parameters */
	new->next = NULL;
	new->n = n;

	return (new);
}
