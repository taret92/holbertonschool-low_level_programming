#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores information about dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);