#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements of a list
 * @h: input pointer to the first node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (len = 0; h; len++)
		h = h->next;

	return (len);
}
