#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: Input number of members
 * @size: Input size of each member
 *
 * Return: pointer to the array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j, tSize = nmemb * size;
	char *array;

	if (tSize == 0)
		return (NULL);

	array = malloc(tSize);

	if (array == NULL)
		return (NULL);

	for (j = 0; j < tSize; j++)
		array[j] = 0;
	return (array);
}

