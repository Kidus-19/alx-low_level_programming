#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints dog's proprties
 * @d: dog records
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
