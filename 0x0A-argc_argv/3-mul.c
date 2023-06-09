#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the product of two numbers
 *
 * @argc: Number of commandline arguments
 * @argv: Pointer to an array of strings
 *
 * Return: Always 0
 *
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul);

	return (0);
}
