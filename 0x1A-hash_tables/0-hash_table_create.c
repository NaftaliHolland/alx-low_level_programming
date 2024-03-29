#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);
}
