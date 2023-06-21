#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Selects the correct function to perform a certain operation
 *
 * @s: Operator
 *
 * Return: Pointer to an operator function
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < (int)sizeof(ops))
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
