#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints dog
 * @d: This is the dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)"); /* Ternary Operator */
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
