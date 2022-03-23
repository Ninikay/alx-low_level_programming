#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: Input string
 *
 * Return: Always 0 (success)
 */
char *cap_string(char *s)
{
	int x = 0, y;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		y = 0;

		while (y < cspc)
		{
			if ((x == 0 || s[x - 1] == spc[y]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

			y++;
		}

	x++;
	}

	return (s);
}
