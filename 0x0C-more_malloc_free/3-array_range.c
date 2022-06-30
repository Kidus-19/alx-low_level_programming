#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - sorts ASC
 * @min: assumed min num.
 * @max: assumed max num.
 * Return: integer pointer
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *range;

	j = 0;
	if (min > max)
	{
		return ('\0');
	}
	range = malloc(sizeof(int) * (max - min + 1));
	if (range)
	{
		for (i = min; i <= max; i++)
		{
			range[j++] = i;
		}
		return (range);
	}
	return ('\0');
}
