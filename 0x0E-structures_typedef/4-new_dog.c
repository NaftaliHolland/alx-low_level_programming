#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 * Return: Pointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *ptr;

	ptr = &my_dog;
	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	return (ptr);
}
