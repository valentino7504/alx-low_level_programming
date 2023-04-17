#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure to create dogs
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description - A simple dog-creating structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
