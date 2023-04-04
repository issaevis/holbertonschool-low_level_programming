#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len- returns the number of nodes in a doubly linked list
 *
 * @h: the head of the linked list
 *
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
