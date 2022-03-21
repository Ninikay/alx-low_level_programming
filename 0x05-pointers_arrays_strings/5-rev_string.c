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
	int a, b, j;
	char *c, aux;

	c = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (j = 1; j < b; j++)
	{
		c++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		aux = s[a];
		s[a] = *c;
		*c = aux;
		a--;
	}
}

