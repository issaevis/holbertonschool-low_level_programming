#include <stdio.h>
#include "lists.h"

/**
 * list_len- finds the length of the linked list
 *
 * @h: the head of the linked list
 *
 * Return: returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;

		h = h->next;
	}

	return (size);
}
