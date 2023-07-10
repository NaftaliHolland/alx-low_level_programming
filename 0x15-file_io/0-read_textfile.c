#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text file and writes to the POSIX std output
 *
 * @filename: name of the file to be read from
 * @letters: number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t written, read_bytes;

	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);

		return (0);
	}

	written = write(1, buffer, read_bytes);
	if (written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (written);
}
