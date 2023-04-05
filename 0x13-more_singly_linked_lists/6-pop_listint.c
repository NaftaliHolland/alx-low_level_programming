#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the first node froma a list
 * @head: pointer to the head node
 *  Return: Int
 */

int pop_listint(listint_t **head)
{
	int n;

	listint_t *temp;
	temp = *head;
	*head = (*temp).next;
	n = (*temp).n;
	free(temp);
	return(n);
}
