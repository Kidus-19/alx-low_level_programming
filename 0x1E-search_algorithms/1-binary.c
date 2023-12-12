#include "search_algos.h"
void print_subArray(int *array, int left, int right);

/**
 * binary_search - searches for an element in O(logn).
 * @array: points to the first element of the array.
 * @size: the number of array elements.
 * @value: value to be searched.
 * Return: i
 */
int binary_search(int *array, size_t size, int value)
{
	int l, mid, r;

	l = 0;
	r = (int)size - 1;
	mid = (l + r) / 2;

	if (array == NULL)
		return (-1);
	while (l < r)
	{
		print_subArray(array, l, r);
		if (array[mid] == value)
		{
			return (mid);
		} else if (value > array[mid])
		{
			l = mid + 1;
			mid = (l + r) / 2;
		} else if (value < array[mid])
		{
			r = mid - 1;
			mid = (l + r) / 2;
		}
	}
	return (-1);
}

/**
 * print_subArray - prints sub array.
 * @array: points to the first element of the array.
 * @left: the first element of the sub array.
 * @right: the last element of the sub array.
 */
void print_subArray(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
