#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node to a list
 *
 * @head: Pointer to head node
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	*head = new;

	return (new);
}
