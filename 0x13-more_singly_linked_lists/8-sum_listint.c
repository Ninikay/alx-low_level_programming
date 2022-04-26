#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: Input head of a list.
 *
 * Return: Always 0 (Success)
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
