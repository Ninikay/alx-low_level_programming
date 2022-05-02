#include "main.h"

/**
 * create_file - creates a file
 * @filename: input filename
 * @text_content: input string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		j = 0;
		while (text_content[j])
			j++;
		wr = write(fd, text_content, j);
		if (wr != j)
			return (-1);
	}

	close(fd);
	return (1);
}
