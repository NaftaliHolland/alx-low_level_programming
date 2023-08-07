#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - displays information contained in the elf header
 *
 * @argc: Number of command line arguments passed to main
 * @argv: Array of strings of arguments passed to main
 *
 * Return: 0
 *
 */

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header file_name\n");
		exit(98);
	}

	return (0);

}
