#include <stdio.h>
#include "dog.h"

/**
 * print_dog - The function that prints a struct dog.
 * @d: The dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(ni1)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(ni1)");
	}
}
