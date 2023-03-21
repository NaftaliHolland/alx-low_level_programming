#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Contains inforamtion about a dog
 * @name: Nameof the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 * Description: Contains information about a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif
