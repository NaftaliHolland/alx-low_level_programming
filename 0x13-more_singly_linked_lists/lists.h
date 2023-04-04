#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 *truct listint_s - Structure for a node
 * @n: data
 * @next: pointer to next node
 * listint_t: type definition for listint_s
 *
 * Description: A node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
