#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name based on a function passed to it
 *
 * @name: The name to be printed
 * @f: Pointer to function to be applied
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
