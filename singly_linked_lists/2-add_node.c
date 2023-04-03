#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node- adds a node at the beggining of the linked list
 *
 * @head: the head of the linked list
 * @str: the string we add
 *
 * Return: returns the address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
		return (NULL);

	if (new != NULL)
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (new);
	}

	return (NULL);
}
