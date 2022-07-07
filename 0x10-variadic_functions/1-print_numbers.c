#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a character pointer which holds separator
 * @n: number of the arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		else
		{
			va_arg(list, int);
		}
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
