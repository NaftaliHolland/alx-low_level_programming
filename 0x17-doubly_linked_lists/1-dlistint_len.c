#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: pointer to the head node
 *
 * Return: size_t
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);

	len = 0;
	temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
