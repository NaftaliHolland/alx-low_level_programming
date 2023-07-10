#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: text to be written to file
 *
 * Return: 1 on success and -1 on failiure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	i = 0;
	while (text_content[i] != '\0')
		i++;

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if ((write(fd, text_content, i)) <= 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

