#include "main.h"
/**
 *  _strpbrk - search a string for any of a set of bytes
 *  @s: input source string
 *  @accept: accepted bytes
 *
 *  Return: Pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
