#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums variable number of arguments.
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
	}
	return (sum);
}
