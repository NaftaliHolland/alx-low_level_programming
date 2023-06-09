#include <stdio.h>

/**
 * main - Prints all it's arguments
 *
 * @argc: Number of commandline arguments
 * @argv: An array of command line argumentd (strings)
 *
 * Return: Always 0
 *
 */

int main(int argc, char **argv)
{
	if (argc == 0)
		return (0);

	printf("%s\n", *argv);

	return (1 + main(argc - 1, argv +1));
}
