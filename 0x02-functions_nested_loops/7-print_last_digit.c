#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: input number
 * Return: n
 */

int print_last_digit(int d)
{
	int n;

	n = 0;
	if (d != 0)
	n = d % 10;
	_putchar(n);
	return (n);
}
