#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: input pointer to the first element in the list
 * @str: str to be duplicated
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nodup = *head;

	while (*head && nodup->next)
		nodup = nodup->next;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	if (*head)
		nodup->next = new;
	else
		*head = new;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	return (new);
}
