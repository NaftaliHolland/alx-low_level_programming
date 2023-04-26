#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * @argc: Argument count
 * @argv: Argument strings
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *op;
	int a, b;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	op_function = get_op_func(op);

	if (op_function == NULL)
	{
		printf("%s", op);
		printf("Error\n");

		exit(99);
	}

	if (!(strcmp(op, "/") || !strcmp(op, "%")) && (b == 0))
	{
		printf("Error\n");

		exit(100);
	}
	printf("%d\n", op_function(a, b));
	return (0);
}
