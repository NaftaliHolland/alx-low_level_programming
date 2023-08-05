#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big endian and 1 if small endian
 *
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;



	return (*c);
}
