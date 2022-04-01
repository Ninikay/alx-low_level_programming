#include "main.h"
/**
 * _strcmp - Comparing two strings
 * @s1: Input first string
 * @s2: Input second string
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, r = 0, cmpVal;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		cmpVal = i;
	}
	else
	{
		cmpVal = j;
	}

	while (k <= cmpVal)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			r = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (r);
}
