#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums up all the data in a linked list
 *
 * @head: pointer to the head node
 *
 * Return: sum of all the data in the list
 *
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

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
