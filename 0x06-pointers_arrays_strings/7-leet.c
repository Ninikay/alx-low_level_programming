#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: - Input the string to encode
 *
 * Return: s encoded string
 */
char *leet(char *s)
{
	int i = 0, j = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < l)
		{
			if (s[i] == r[j] || s[i] - 32 == r[j])
			{
				s[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
