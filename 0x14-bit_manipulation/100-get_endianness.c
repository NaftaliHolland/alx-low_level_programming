#include "main.h"
/**
 * get_endianness - checks for endianness of a machine
 *
 * Return: 0 if big endian and 1 if little endian
 *
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *) &i;

	return (*p);
}
