#include "lists.h"
/**
 * sum_dlistint - function returns sum of all data of a list
 *
 *@head: input pointer to pointer of head of linked list
 *
 * Return: 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int y = 0;

	while (head)
	{
		y += head->n;
		head = head->next;
	}
	return (y);
}
