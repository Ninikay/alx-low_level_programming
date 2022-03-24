#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: input number one.
 * @n2: input number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: Always 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, o, g, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		g = c1;
	else
		g = c2;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (g >= 0)
	{
		o = dr1 + dr2 + add;
		if (o >= 10)
			add = o / 10;
		else
			add = 0;
		if (o > 0)
		*(r + g) = (o % 10) + 48;
		else
			*(r + g) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
