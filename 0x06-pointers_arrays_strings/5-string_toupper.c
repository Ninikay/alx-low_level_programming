#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @s:Input string to modified
 *
 * Return: character variable
 */
char *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 97 && s[k] <= 122)
		{
			s[k] -= 32;
		}

		k++;
	}

	return (s);
}

