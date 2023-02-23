#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Entry point
 * DEcription:Prints from n to 98
 * @n:INteger it takes as a parameter
 * Return:Void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		printf("%d, ", i);
		printf("%d", i);
	}
}
