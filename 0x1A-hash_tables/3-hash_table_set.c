#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key: connot be empty
 * @value: the value associated to the key
 *
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/** create the a new node **/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->value = malloc(strlen(value) + 1);
	if (new->value == NULL)
	{
		free(new);
		return (0);
	}

	new->key = (char *)key;
	strcpy(new->value, value);

	/** get the index using the key **/
	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
	temp = ht->array[index];
	/** insert if list is empty **/
	if (temp == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
		return (1);
	}
	/** insert at the begining incase of a collision **/
	new->next = temp;
	ht->array[index] = new;

	return (1);
}
