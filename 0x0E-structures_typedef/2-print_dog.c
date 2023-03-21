#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints info abt the dog
 * @d: struct dog
 * Return void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("nil");
	if (d->age < 0)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
