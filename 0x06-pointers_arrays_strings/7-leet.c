#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: - Input the string to encode
 *
 * Return: s encoded string
 */
char *leet(char *s)
{
	int i, j;
	char r[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (r[j] == s[i])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
