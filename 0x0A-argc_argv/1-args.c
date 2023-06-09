#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: Number of arguments passed to main
 * @argv: An array of strings passed to main
 *
 * Return: Always 0
 *
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
