#include "main.h"

/**
 * _isdigit - Checks if character is a digit (0 through 9)
 * @c: Input, the number to be checked
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
