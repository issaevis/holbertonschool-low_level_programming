#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index- inserts a node at a given index
 *
 * @h: the head of the linked list
 * @idx: the index
 * @n: the data inside the node
 *
 * Return: returns the address of the neq node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int count = 0;

	tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (count != idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
