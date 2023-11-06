#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: The pointer to dog.
 * @name: The name of dog.
 * @age: The age of the dog.
 * @owner: the owner of the dog.
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
