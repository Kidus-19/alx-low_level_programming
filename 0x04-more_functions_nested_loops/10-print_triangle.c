#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k <i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
