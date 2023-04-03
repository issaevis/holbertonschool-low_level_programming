#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints the contents of a singly linked list
 *
 * @h: the head of the linked list
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
