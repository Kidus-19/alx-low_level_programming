#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int len;
	int half;

	len = _strlen(str);
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
