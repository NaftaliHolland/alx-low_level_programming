#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a node to the end of a list
 *
 * @head: pointer to a pointer to the head node
 * @str: String to be added to the new node
 *
 * Return: A pointer to the new node
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
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
	new->len = i;
	new->str = s;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
