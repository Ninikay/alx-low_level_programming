#include "main.h"

/**
 * _print_rev_recursion - Print the string in reverse
 * @s: Input the string to reverse
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
