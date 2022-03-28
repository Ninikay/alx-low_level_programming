#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Input pointer to string
 * @c: input character to find
 *
 * Return: Pointer from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
