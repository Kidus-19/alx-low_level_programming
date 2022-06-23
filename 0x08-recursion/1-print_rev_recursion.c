#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string parameter.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
	_putchar('\n');
}
