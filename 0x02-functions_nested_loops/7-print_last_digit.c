#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: input number
 * Return: n
 */

int print_last_digit(int d)
{
	int n;

	n = d % 10;
	n = n * 10 + d;
	return (n);
}
