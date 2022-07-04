#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print information of one dog.
 * @d: contains a structure of an information for a dog
 *
 * Return - Always 0.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
	else
		return;
}
