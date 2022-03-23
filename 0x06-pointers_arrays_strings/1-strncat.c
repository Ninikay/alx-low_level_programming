#include "main.h"

/**
 * _strncat - Concatenating two strings
 * @dest: Input the destination value
 * @src: Input the source string
 * @n: The number of bytes to be concatenate
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
