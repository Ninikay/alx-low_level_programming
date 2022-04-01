#include "main.h"
/**
 *  _strspn - the length of a prefix string
 * @s: Input initial segment
 * @accept: accepted bytes
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0, n, t = 0;

	while (accept[m])
	{
		n = 0;

		while (s[n] != 32)
		{
			if (accept[m] == s[n])
			{
				t++;
			}

			n++;
		}

		m++;
	}

	return (t);
}
