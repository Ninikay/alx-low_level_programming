#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
  *print_strings - prints strings followed by a new line.
  *@separator: Input string
  *@n: number of strings.
  *
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (j < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
