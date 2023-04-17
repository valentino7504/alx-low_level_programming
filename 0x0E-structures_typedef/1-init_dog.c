#include "dog.h"
/**
 * init_dog - initialises an instance of the dog structure
 * @d: the dog instance
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == (void *)0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
