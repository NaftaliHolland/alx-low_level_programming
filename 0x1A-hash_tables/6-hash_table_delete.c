#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table to be printed
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next_node;
	unsigned long int i;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	i = 0;
	/** Loop thorought the whole array**/
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			/** exhaust the whole linked list while freeing each node**/
			while (temp != NULL && temp->key != NULL && temp->value != NULL)
			{
				next_node = temp->next;
				free(temp->value);
				free(temp);
				temp = next_node;
			}
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
