#include "main.h"

/**
 * reverse_array - reverses the array.
 * @a: integer pointer
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;
	int len;

	j = 0;
	if (n % 2 == 0)
		len = n / 2 - 1;
	else
		len = n / 2;
	for (i = n - 1; i > len; i--)
	{
		temp = a[i];
		a[j] = temp;
		a[i] = a[j];
		j++;
	}
}
