#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of members(elements)
 * @size: size of the array.
 * Return: no return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *memLoc;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	memLoc = malloc(nmemb * size);
	if (memLoc)
	{
		for (i = 0; i < nmemb; i++)
		{
			memLoc[i] = 0;
		}
		return (memLoc);
	}
	return ('\0');
}
