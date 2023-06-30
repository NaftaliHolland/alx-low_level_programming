#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - A function that adds a node at the beginning of a linked list
 *
 * @head: pointer to a pointer to the head node
 * @str: String to be added to the new node
 *
 * Return: pointer to the new node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;
	char *s;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	s = strdup(str);
	new->str = s;
	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
