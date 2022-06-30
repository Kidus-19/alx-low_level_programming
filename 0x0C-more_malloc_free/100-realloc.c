#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory in the heap.
 * @ptr: void pointer
 * @old_size: old size of the memory
 * @new_size: new size of the memory
 * Return: no return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		free(ptr);
		newPtr = realloc(ptr, new_size);
		if (newPtr)
		{
			return (newPtr);
		}
	}
	if (*(int *)ptr == '\0')
	{
		newPtr = malloc(new_size);
		if (newPtr)
		{
			return (newPtr);
		}
	}
	if (new_size == 0 && *(int *)ptr != '\0')
		free(ptr);
	return ('\0');
}
