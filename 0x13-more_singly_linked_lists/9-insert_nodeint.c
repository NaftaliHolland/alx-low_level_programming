#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given index
 *
 * @head: pointer to pointer to the head node
 * @idx: index of the list where the new node should placed
 * @n: Data to be inserted in the new node
 *
 * Return: address of the new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 1; i < idx; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
