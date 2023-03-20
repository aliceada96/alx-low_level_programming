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
		return;

	if (d->name == NULL)
		d->name = "(nill)";
	if (d->age < 0)
		printf("Age: (nill)\n");

	if (d->owner == NULL)
		d->owner = "(nill)";

	printf("Name: %s\n", d->name);
	printf("Age: $.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
