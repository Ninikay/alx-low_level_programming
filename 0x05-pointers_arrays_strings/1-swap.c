#include "main.h"

/**
 * swap_int - A function that swaps the value of two integer
 * @a: First integer
 * @b: Second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
