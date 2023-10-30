#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to the hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	char flag_comma;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	i = 0;
	flag_comma = 0;
	printf("{");
	/** Loop thorought the whole array**/
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag_comma == 1)
				printf(", ");

			temp = ht->array[i];
			/** exhaust the whole linked list **/
			while (temp != NULL && temp->key != NULL && temp->value != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			flag_comma = 1;
		}
		i++;
	}
	printf("}\n");

}
