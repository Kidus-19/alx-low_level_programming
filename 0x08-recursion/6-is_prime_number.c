#include "main.h"

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer input.
 * Return: status 1(success), otherwise (0)
 */

int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (((n % 2 == 0) ? 1 : 0) + is_prime_number(--n));
	}
}
