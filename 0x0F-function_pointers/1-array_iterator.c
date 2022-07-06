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
	size_t i;

	if (size < 0)
		free(array);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
