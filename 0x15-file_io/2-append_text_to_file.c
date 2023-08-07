#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text file at the end of a file
 *
 * @filename: name of the file
 * @text_content: content to be appended
 *
 * Return: 1 on success -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;

		if ((write(fd, text_content, i)) < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
