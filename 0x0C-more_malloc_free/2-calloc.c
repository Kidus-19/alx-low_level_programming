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
	void *calLoc;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	calLoc = calloc(nmemb, size);
	if (calLoc)
	{
		return (calLoc);
	}
	return ('\0');
}
