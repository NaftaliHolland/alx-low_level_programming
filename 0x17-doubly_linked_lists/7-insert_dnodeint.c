#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to a pointer to the head node
 * @idx: index to be inserted
 * @n: data to be inserted
 *
 * Return: the new node
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	temp = *h;
	/* loop to the given idx-1 */
	for (i = 1; i < idx; i++, temp = temp->next)
	{
		if (temp == NULL)
			return (NULL);
	}

	/* create the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* innitialize node values */
	new->next = temp->next;
	new->prev = temp;
	new->n = n;

	/* insert the node */
	temp->next = new;

	return (new);
}
