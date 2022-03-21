#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c, temp;

	a = 0;
		while (s[a] != '\0')
		{
			a++;
		}

	for (c = 1; c < b; c++)
		{
		temp = s[c];
		s[c] = s[b];
		s[b] = temp;
		c++;
		b--;
		}
}

