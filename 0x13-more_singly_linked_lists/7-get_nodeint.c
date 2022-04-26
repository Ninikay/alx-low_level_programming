#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: input head of a list.
 * @index: input index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
