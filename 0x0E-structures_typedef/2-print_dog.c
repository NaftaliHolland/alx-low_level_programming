#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 *
 * @d: Pointer to a struct dog
 *
 * Return: Void
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
