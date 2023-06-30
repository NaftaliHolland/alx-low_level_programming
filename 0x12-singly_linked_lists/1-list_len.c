#include "lists.h"
#include <stddef.h>
/**
 * list_len - A function that returns the number of elements in linked list
 *
 * @h: pointer to the head node
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
