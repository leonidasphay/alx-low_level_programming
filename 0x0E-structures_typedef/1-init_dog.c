#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - fill data of a dog :).
 * @d: vars in the struct.
 * @name: name of dog.
 * @age: Age of the dog.
 * @owner: Owner of a dog.
 * Return - Void function.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
