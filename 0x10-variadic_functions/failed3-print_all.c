#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all inputs
 * @format: const char * const
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *temp;
	int i;
	char *check;

	i = 0;
	check = _strBuilder(format);
	va_start(list, format);
	while (_strBuilder[i])
	{
		switch (*_strBuilder)
		{
			case 'c':
				printf("%c, ", va_arg(list, int));
			break;
			case 'i':
				printf("%d, ", va_arg(list, int));
			break;
			case 'f':
				printf("%f, ", va_arg(list, double));
			break;
			case 's':
			{
				temp = va_arg(list, char *);
				if (temp)
					printf("%s, ", temp);
				else
					printf("(nil), ");
			}
			i++;
		}
	}
}

/**
 * _strBuilder - returns a string copy
 * @str: a character pointer.
 * Return: temp
 */

char *_strBuilder(char *str)
{
	int i;
	char *temp;

	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	return (temp);
}
