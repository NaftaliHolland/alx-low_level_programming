#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 *
 * @filename: Name of file to be created
 * @text_content: content to be written to the created file
 *
 * Return: 1 on success -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
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

	return (1);
}
