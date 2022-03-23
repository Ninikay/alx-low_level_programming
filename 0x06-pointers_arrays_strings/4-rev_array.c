#include "main.h"
#include <stdio.h>
/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int c, d;
	n = n - 1;
	d = 0;

	while (d <= n)
	{
		c = a[d];
		a[d++] = a[n];
		a[n--] = c;
	}
}
