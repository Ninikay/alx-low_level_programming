#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: Input subtring to find
 * @haystack: input the main string
 *
 * Return: Pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, k = 0;

	while (haystack[j])
	{
		while (needle[k])
		{
			if (haystack[j + k] != needle[k])
			{
				break;
			}

			k++;
		}

		if (needle[k] == '\0')
		{
			return (haystack + j);
		}

		j++;
	}

	return ('\0');
}
