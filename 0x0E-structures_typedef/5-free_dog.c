#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: a dog structure.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
