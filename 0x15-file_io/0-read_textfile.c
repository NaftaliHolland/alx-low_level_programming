#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 *
 * @filename: path to the file to be oppaened
 * @letters: number of letters to be read
 *
 * Return: Number of letters that could be read and printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_written, bytes_read;
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

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(1, buffer, bytes_read);
	if (bytes_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_written);
}
