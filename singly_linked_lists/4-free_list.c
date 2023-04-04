#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list- frees a linked list
 *
 * @head: the head of the linked list
 *
 * Return: returns nothing
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
