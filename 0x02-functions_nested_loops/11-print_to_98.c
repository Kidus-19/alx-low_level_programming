#include "main.h"

/**
 * print_to_98 - prints till 98
 * @n: input number
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			if (i == 98)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			if (i == 98)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
