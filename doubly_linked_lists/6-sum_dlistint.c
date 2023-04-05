#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * sum_dlistint- adds all the ints in the node
 *
 * @head: the head of the linked list
 *
 * Return: returns the sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
