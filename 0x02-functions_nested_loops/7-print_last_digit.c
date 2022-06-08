#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: input number
 * Return: d
 */

int print_last_digit(int d)
{
	d = d % 10;
	d = (10 * d) + d;
	return (d);
}
