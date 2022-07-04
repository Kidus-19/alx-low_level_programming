#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog'sage
 * @owner: dog's owner
 * Return: n_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n_dog;

	n_dog = (struct dog *)malloc(sizeof(struct dog) + 2);
	if (n_dog)
	{
		n_dog->name = name;
		n_dog->age = age;
		n_dog->owner = owner;
		return (n_dog);
	}
	return (NULL);
}

