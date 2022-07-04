#include <stdio.h>
#include <stdlib.h>
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
	struct dog test;

	test = '\n';
	d = (struct dog *)malloc(sizeof(struct dog));
	if (d)
	{
		test = {name, age, owner};
		*d = test;
	}
	else
		*d = test;
}
