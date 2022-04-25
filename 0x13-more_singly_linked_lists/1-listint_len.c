#include "lists.h"
/**
  * listint_len - returns the number of elements in a linked listint_t list.
  * @h: input pointer to first element on list.
  *
  * Return: number of elements in list.
  */
size_t listint_len(const listint_t *h)
{
	size_t list_count;

	list_count = 0;
	while (h != NULL)
	{
		h = h->next;
		list_count++;
	}

	return (list_count);
}
