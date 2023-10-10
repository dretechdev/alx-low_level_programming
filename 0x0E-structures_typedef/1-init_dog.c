#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d: This is the pointer to dog
 * @name: This is the name of the dog
 * @age: This is the age of the dog
 * @owner: This is the dog's owner
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
