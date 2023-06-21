#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to main
 * @argv: Array of Strings passed to main
 *
 * Return: int
 *
 */

int main(int argc, char **argv)
{
	char *op;
	int a, b, result;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0)
	{
	op_function = get_op_func(op);

	result = op_function(a, b);

	printf("%d\n", result);

	return (0);
	}
	if (strcmp(op, "*") == 0 || strcmp(op, "/") == 0 || strcmp(op, "%") == 0)
	{

	op_function = get_op_func(op);

	result = op_function(a, b);

	printf("%d\n", result);

	return (0);
	}

	else
	{
		printf("Error\n");
		exit(99);
	}
}
