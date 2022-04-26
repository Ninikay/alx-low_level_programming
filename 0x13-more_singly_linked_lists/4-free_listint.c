#include "lists.h"

/**
 * free_listint - free linked list
 * @head: input head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		free(node);
	}
	head = NULL;

}
