#include "main.h"

/**
 * print_most_numbers - prints 0 through 9
 * except 2 & 4 followed by new line.
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
