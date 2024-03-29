#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to a struct dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
