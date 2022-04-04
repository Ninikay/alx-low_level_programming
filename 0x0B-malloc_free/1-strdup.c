#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: Input string to duplicate
  *
  * Return: the duplicated string
  */
char *_strdup(char *str)
{
	int k = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (k < i)
	{
		s[k] = str[k];
		k++;
	}

	s[k] = '\0';
	return (s);
}

