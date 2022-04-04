#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: Input size of the array
  * @c: Input char to store in array
  *
  * Return: Pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		a[j] = c;
	}

	return (a);
}
