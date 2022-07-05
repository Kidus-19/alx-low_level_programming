#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for dog structure.
 */

void free_dog(dog_t *d)
{
	if (d)
	free(d);
}
