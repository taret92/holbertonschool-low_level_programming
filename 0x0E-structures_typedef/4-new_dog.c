#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	int i, jname, jowner;

	pdog = malloc(sizeof(*pdog));
		if (pdog == NULL || !(name) || !(owner))
	{
		free(pdog);
		return (NULL);
	}

	for (jname = 0; name[jname]; jname++)
		;
	for (jowner = 0; owner[jowner]; jowner++)
		;
		pdog->name = malloc(jname + 1);
		pdog->owner = malloc(jowner + 1);

		if (!(pdog->name) || !(pdog->owner))
	{
		free(pdog->owner);
		free(pdog->name);
		free(pdog);
		return (NULL);
	}
		for (i = 0; i < jname; i++)
			pdog->name[i] = name[i];
			pdog->name[i] = '\0';

			pdog->age = age;

		for (i = 0; i < jowner; i++)
			pdog->owner[i] = owner[i];
			pdog->owner[i] = '\0';

	return (pdog);
}
