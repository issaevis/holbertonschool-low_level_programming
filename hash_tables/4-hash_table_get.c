#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get- gets a value from a specific index
 *
 * @key: its the key of the node
 * @ht: the hash table
 *
 * Return: returns the value if it succeeds, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
	}
	return (NULL);
}
