#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Input memory area to fill
 * @b: Input constant byte
 * @n: Input first bytes of memory area
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

