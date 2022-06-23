#include "main.h"

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer input.
 * Return: status 1(success), otherwiise (0)
 */

int is_prime_number(int n)
{
	int m;

	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	m = n;
	return ((_numFactors(m, n) <= 2) ? 1 : 0);
}

/**
 * _numFactors - counts the factors of a number.
 * @m: copy of the given number
 * @n: original number.
 * Return: count
 */
int _numFactors(int m, int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (m % n == 0)
	{
		return (1 + _numFactors(m, --n));
	}
	else
	{
		return (0 + _numFactors(m, --n));
	}
}
