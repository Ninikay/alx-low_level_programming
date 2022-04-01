#include "main.h"
#include <stdio.h>

/**
  * main - Prints all argument content
  * @argc: Input argument count
  * @argv: Input argument vector of command line
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
