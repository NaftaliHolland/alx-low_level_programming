#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - copies the contents of one file to another
 *
 * @argc: number of arguments
 * @argv: pointer to a list of string arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from %s", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		close(fd_from);
		exit(1);
	}
	bytes_read = read(fd_from, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		if ((close(fd_from)) == -1)
		{
			dprintf(2, "Can't close fd %d", fd_from);
			exit(100);
		}
		dprintf(2, "Can't read from %s", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (bytes_read != 0)
	{
		if (dprintf(fd_to, "%s", buffer) == -1)
			exit(99);
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			if ((close(fd_from)) == -1)
			{
				dprintf(2, "Error: Can't close fd %d", fd_from);
				exit(100);
			}
			exit(98);
		}
	}
	if ((close(fd_from)) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if ((close(fd_to)) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	return (0);
}
