#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: input pointer to filename.
 * @text_content: input null terminated string
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, append, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		j = 0;
		while (text_content[j])
			j++;

		append = write(fd, text_content, j);
		if (append < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
