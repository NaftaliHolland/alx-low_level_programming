#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - Returns the number of elements in a list
 * @h: Adress to the head node
 * Return: Unsigned int
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + listint_len((*h).next));
}
