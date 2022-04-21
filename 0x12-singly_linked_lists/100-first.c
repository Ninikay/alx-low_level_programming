
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * print - function executed before main
 *
 * Return: void.
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
