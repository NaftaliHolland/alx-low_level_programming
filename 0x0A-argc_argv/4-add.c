#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 *
 * @argc: Number of command line arguments
 * @argv: An array of strings
 *
 * Return: 0 on success 1 on failiure
 *
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (1);
	}

	while (argc > 1)
	{
		if (!(atoi(argv[argc - 1])) || (atoi(argv[argc - 1]) < 0))
		{
			printf("Error\n");

			return (1);
		}

		sum += atoi(argv[argc - 1]);

		argc--;
	}

	printf("%d\n", sum);

	return (0);
}
