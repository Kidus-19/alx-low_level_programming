#include "main.h"

/**
 * print_diagonal - prints dagonal
 * @n: number of \'s
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <=i ; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
