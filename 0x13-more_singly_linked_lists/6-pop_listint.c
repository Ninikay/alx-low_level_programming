#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t
  * @head: input pointer to pointer of head node
  *
  * Return: 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *count;
	int delete = 0;

	if (*head == NULL)
		return (delete);

	count = *head;
	delete = count->n;
	/*make head point to the next element*/
	*head = (*head)->next;
	free(count);

	return (delete);
}
