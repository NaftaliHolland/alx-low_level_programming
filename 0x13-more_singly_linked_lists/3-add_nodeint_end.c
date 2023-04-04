#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node at the end of a list
 *
 * @head: Pointer to the head node
 * @n: value to be added to new node
 *
 * Return: Pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while ((*temp).next != NULL)
		{
			temp = (*temp).next;
		}
	
		(*temp).next = new;
	}
		
	return (new);
}
