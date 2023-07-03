#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linkes list
 *
 * @h: Pointer to the head node of the list
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
