#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input destination memory area
 * @src: input source memory area
 * @n: copies bytes from memory area
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
