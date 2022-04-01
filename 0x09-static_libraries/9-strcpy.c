#include "main.h"

/**
  * _strcpy - Copy a string pointed to by src
  * @dest: Destination value
  * @src: Pointing to the source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	dest[k++] = '\0';

	return (dest);
}
