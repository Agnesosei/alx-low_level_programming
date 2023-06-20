#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A variable of type struct dog.
 * @d: The dog.
 * @name: Pointer to dog's name of.
 * @age: Dog's age.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
