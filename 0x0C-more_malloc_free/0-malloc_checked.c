#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory of size b;
 * @b: size of the dynamic memory.
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr)
	{
		return (ptr);
	}
	return (98);
}
