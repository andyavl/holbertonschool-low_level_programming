#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type
 * @d: structure to initialice
 * @name: dog
 * @age: dog
 * @owner: dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
