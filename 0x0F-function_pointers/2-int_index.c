#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - the index of the
 * @array: an integer pointer
 * @size : size of the array
 * @cmp: a pointer to function that has one int param
 * Return: integral value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
