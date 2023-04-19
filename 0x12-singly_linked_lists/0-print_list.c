#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints the ellements of a list
 * @h: pointer to the list
 * Return: node (size_t)
 */
size_t print_list(const list_t *h)
{
	int num = 0;

	while (h)
	{
		if ((*h).str != NULL)
			printf("[%u] %s\n", (*h).len, (*h).str);
		else
			printf("[0] (nil)\n");

		h = (*h).next;
		num++;
	}
	return (num);
}
