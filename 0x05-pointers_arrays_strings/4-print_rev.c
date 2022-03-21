#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	for (; a >= 0; a--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

