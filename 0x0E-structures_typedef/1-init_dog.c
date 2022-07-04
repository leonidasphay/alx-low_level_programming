#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes the structure
 *@d: variable to struct dog
 *@name: member
 *@age: member
 *@owner: member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
