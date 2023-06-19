#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A dog structure
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * dog_t: typedef for struct dog
 * Description: A structure for dog details
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
