#include "main.h"
/**
 * print_alphabet - entry point
 * Description: print lowercase alphabet abcd
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
