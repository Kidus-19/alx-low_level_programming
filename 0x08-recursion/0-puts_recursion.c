#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string
 */

void _puts_recursion(char *s)
{
	int len;
	char *ends;
	char *start ;

	start = s;
	len = _strlen(s);
	ends =  start + len;
	if (s == ends)
	{
		_putchar('\n');
		return;
	}
	else if (s < ends)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

/**
 * _strlen - returns the length of a string.
 * @s:  string input.
 * Return: len
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
