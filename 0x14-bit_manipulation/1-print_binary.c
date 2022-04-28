#include "main.h"
#include <stdio.h>
/**
  *print_binary - prints the binary representation of a number.
  *@n: input unsigned long int to be converted.
  *
  *Return: void.
  */
void print_binary(unsigned long int n)
{
	unsigned long int base_two;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		base_two = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(base_two + '0');
	}
}
