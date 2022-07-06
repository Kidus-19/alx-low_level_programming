#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints the array depending on d/t fun.
 * @array: an integer pointer
 * @size: size of the array
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int s;

	if (action != NULL)
	{
		s = (int)size;
		for (i = 0; i < s; i++)
		{
			action((int)array[i]);
		}
	}
}
