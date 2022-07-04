#include <stdio.h>
#include <cstdlib.h>
#include "dog.h"

/**
 * init_dog - initializes dog struct
 * @d: a pointer to dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog = malloc(sizeof(struct dog));
	if (dog)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
	else
	{
		dog = '\n';
	}
}
