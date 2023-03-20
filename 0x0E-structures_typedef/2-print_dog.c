#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints info abt the dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	if (d->name == NULL)
		printf("Name :(nill)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nill)\n");
	else
		printf("Age: $f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
