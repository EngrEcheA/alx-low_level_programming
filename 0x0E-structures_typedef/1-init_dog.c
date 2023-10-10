#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of dog struct type
 * @d: pointer to dog struct initialize
 * @name: name to initialize
 * @owner: owner to initialize
 * @age: age to initalize
 */
void init_dog(struct dog *d, char *name, char age, float *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
