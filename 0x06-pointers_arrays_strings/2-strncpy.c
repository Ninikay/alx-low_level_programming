#include "main.h"

/**
 * _strncpy -  a function that copies a string
 * @dest: Input destination string
 * @src: Input source string
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, c = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
