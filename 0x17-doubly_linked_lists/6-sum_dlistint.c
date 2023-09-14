#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - adds all the data(n) in a dlistint_t linked list
 *
 * @head: pointer to the head node
 *
 * Return: sum of all the data in the nodes
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;

		temp = temp->next;
	}

	return (sum);
}
