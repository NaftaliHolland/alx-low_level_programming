#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <errno.h>

/**
 * main - copies the content of a file to onoter file
 *
 * @argc: number of arguments passed to main
 * @argv: array of strings passed to main
 *
 * Return: always 0
 *
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char *buffer;

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{

		if (errno == ENOENT)
		{
			dprintf(1, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	
	if (fd_to == -1)
	{
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		exit(99);
	}	

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		dprintf(fd_to, "%s", buffer);


	if (bytes_read == -1)
	{
		free(buffer);
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
	}
	
	free(buffer);
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
