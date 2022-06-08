#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10X
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 10;
	while (i >= 0)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);

		}
		i--;
		_putchar('\n');
	}
}
