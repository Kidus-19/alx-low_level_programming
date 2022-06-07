#include "main.h"

/**
 * main - a program that prints _putchar,
 * followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	char str[9];
	int i;

	str[0] = '_';
	str[1] = 'p';
	str[2] = 'u';
	str[3] = 't';
	str[4] = 'c';
	str[5] = 'h';
	str[6] = 'a';
	str[7] = 'r';
	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
