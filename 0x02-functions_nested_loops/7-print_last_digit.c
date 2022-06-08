#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: input number
 * Return: n
 */

int print_last_digit(int d)
{
	int n;
	char ch;

	n = 0;
	if (d != 0)
	n = d % 10;
	ch = (char) (n + 48);
	_putchar(ch);
	return (n);
}
