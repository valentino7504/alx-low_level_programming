#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees up memory occupied by a dog instance
 * @d: the dog instance to be freed up
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
