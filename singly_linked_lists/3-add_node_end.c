#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end- adds a node at the end of the linked list
 *
 * @head: the head of the linked list
 * @str: the string we add
 *
 * Return: returns the address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp;

	if (new == NULL || str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{

		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
