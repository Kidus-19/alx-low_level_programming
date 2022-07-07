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
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator)
			{
			printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		}
		else
		{
			printf("%d\n", va_arg(list, int));
		}
	}
	va_end(list);
}
