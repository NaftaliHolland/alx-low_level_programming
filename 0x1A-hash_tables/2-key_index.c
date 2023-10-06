#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - uses the jdb function to compute the index of a key
 *
 * @key: key used to get the index
 * @size: size of the array or the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index = index % size;

	return (index);
}
