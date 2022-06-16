#include "main.h"

/**
 * reverse_array - reverses the array.
 * a: integer pointer
 * n: size of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	j = 0;
	for (i = n-1; i > n / 2; i--)
	{
		temp = a[i];
		a[j++] = temp;
		a[i] = a[j];
	}
}
