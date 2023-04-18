#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type
 * @d: dog type
 * @name: dog name
 * @age: dog age
 * @owner: the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
