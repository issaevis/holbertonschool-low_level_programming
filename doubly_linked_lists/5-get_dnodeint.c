#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index- gets a node at a predetermined index from a dll
 *
 * @head: the head of the linked list
 * @index: the index of the node
 *
 * Return: returns the address of the node or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ret = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (ret == NULL)
		return (NULL);
	ret = head;
	while (ret != NULL)
	{
		if (count == index)
			return (ret);
		count++;
		ret = ret->next;
	}
	return (NULL);
}
