#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends a text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to be appended
 *
 * Return: 1 on success an -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
		i++;

	if (write(fd, text_content, i) < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
