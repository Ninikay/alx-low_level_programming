#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: input pointer to the first element of the list
 * Return: Null
 */

void free_list(list_t *head)
{
	list_t *k;

	while ((k = head) != NULL)
	{
		head = head->next;
		free(k->str);
		free(k);
	}
}
