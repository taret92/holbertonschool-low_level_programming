#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialization
 * @d: pointer to struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner
 * Return: 0
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
