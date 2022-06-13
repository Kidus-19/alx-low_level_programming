#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array.
 * @a: integer pointer
 * @n: size of the array.
 */

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
