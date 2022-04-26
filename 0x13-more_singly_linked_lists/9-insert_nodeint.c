#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: input double pointer to the first node in the list
 * @idx: input index of node to insert
 * @n: value for new node
 *
 * Return: addresss of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	new = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && new != NULL; i++)
			new = new->next;
	}

	if (new == NULL && idx != 0)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = new->next;
		new->next = temp;
	}

	return (temp);

}
