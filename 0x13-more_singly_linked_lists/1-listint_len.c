#include "lists.h"
/**
 * listint_len - Returns the number of elements in a list
 * @h: Adress to the head node
 * Return: Unsigned int
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
