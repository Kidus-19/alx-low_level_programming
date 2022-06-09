#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * followed by a new line
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
