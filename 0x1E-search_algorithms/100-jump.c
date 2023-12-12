#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searchs for a value with jump search algorithm.
 * @array: points to the first element of the array.
 * @size: number of array elements.
 * @value: the value to be searched.
 * Return: idx
 */

int jump_search(int *array, size_t size, int value)
{
	int idx, m, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	j = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		j++;
		prev = idx;
		idx = j * m;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
