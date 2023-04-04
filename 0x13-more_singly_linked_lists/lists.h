#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * list_int - Structure for a node
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

#endif
