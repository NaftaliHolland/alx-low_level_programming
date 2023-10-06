#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to a hash table
 * @key: key to be checked
 *
 * Return: the value associated with the element, NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);

	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	return (temp->value);
}
