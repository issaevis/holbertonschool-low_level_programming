#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table
 *
 * @size: the size of the hash table
 *
 * Return: returns the address of the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tab1 = malloc(sizeof(hash_table_t));

	if (tab1 == NULL)
		return (NULL);

	tab1->size = size;
	tab1->array = malloc(sizeof(hash_node_t *) * size);

	if (tab1->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab1->array[i] = NULL;
	return (tab1);
}
