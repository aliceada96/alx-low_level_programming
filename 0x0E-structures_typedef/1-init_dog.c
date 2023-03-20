#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Reurn: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));

		if (d == NULL)
		{
			return;
		}

	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
