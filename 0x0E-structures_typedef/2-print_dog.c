#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct name
 * @d: input
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d) .name))
			printf("Name: (nil)\n");
		else
			printf("Nmae: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
