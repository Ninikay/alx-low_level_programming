#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: Input string 1 to concatenate
  * @s2: Input string 2 to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int c, k, size, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = 0;
	while (s1[c] != '\0')
		c++;
	k = 0;
	while (s2[k] != '\0')
		k++;

	size = c + k;

	s = malloc((sizeof(char) * size) + 1);
	/*check if malloc was successful */
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < c)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
