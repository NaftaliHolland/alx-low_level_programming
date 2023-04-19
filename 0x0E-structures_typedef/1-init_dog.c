#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a avariable of type struct dog
 * @d:Struct variable to be initialized
 * @name:Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 * Return:Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
