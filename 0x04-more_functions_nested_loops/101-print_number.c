#include "main.h"

/**
 * print_number - prints a number.
 * @n: the number to be printed.
 */

void print_number(int n)
{
	int sum;
	int digits;
	int rem;

	if (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		digits = _nodigits(n);
		sum = _sum(n, digits);
		while (sum != 0)
		{
			rem = sum % 10;
			_putchar(rem + 48);
			sum = sum / 10;
		}
	}
	else
	{
		digits = _nodigits(n);
		sum = _sum(n, digits);
		while (sum != 0)
		{
			rem = sum % 10;
			_putchar(rem + 48);
			sum = sum / 10;
		}
	}
}

/**
 * _nodigits - returns number of digits
 * in a number.
 * @n: accepts an integer.
 * Return: counter
 */

int _nodigits(int n)
{
	int counter;

	counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

/**
 * _sum - sums the input digits in reverse.
 * @n: integer number
 * @digits: the number of digits of n.
 * Return: sum.
 */

int _sum(int n, int digits)
{
	int rem;
	int sum;

	sum = 0;
	while (n != 0)
	{
		rem = n % 10;
		sum = sum + rem * _pow(digits);
		digits--;
		n = n / 10;
	}
	return (sum);
}

/**
 * _pow - computes the 10th power of digits
 * @digits: number of digits.
 * Return: pow
 */

int _pow(int digits)
{
	int i;
	int pow;

	pow = 1;
	for (i = 1; i < digits; i++)
	{
		pow = pow * 10;
	}
	return (pow);
}
