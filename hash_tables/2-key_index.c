#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * dey_index- a function that gives you the index of a key
 *
 * @key: its the key of the node
 * @size: the size of the array of the hash table
 *
 * Return: returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
