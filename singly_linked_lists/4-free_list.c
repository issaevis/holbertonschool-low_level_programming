#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node- adds a node at the beggining of the linked list
 *
 * @head: the head of the linked list
 * @str: the string we add
 *
 * Return: returns the address of new node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
