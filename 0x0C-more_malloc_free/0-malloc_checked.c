#include <stdlib.h>

/**
  * malloc_checked - Allocates memory
  * @b: Input size to allocate
  *
  * Return: Void
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
