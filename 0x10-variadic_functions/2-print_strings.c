#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints input strings
 * @separator: consr char*
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *temp;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		temp = va_arg(list, char*);
		if (separator)
		{
			if (temp)
				printf("%s%s", temp, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (temp)
				printf("%s", temp);
			else
				printf("(nil)");
		}
	}
	temp = va_arg(list, char*);
	if (temp)
		printf("%s\n", temp);
	else
		printf("(nil)\n");
	va_end(list);
}
