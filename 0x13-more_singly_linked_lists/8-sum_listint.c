#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Sums all the data of a linked list
 *
 * @head: Pointer to the head node
 *
 * Return: Int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);
	while(head)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
