#include "main.h"
#include <stdio.h>

/**
  * main - copy one file to another.
  * @argc: input argument count.
  * @argv: input argument vector.
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int f1, f2, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f1 =  open(argv[1], O_RDONLY, 0);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(f1, buf, 1024)) > 0)
	{
		if (write(f2, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	}
	if (close(f2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);
	}
	return (0);
}
