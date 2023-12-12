#include "search_algos.h"
int logn_value(int size);
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
	int l, mid, r, i, logn;

	l = 0;
	r = (int)size;
	mid = (l + r) / 2;
	logn = logn_value(size);

	if (array == NULL)
		return (-1);
	for (i = 0; i < logn; i++)
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
 * logn_value - finds the log value to the base 2 on size.
 * @size: the number of array elements.
 * Return: logn
 */
int logn_value(int size)
{
	int logn;

	logn = 0;
	while (size > 1)
	{
		size /= 2;
		logn++;
	}
	return (logn);
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
	for (i = left; i < right - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
