#include "main.h"

/**
  *get_endianness - determines the endianness of a machine.
  *
  *Return: 0 big endian, 1 little endian.
  */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j);
}
