#include "main.h"

/**
 * print_number - prints a num using _putchar.
 * @n: input number
 */

void print_number(int n)
{
	int counter;
	int temp;
	int sum;
	int rem;
	int digits;
	int pow;
	int i;

	counter = 0;
	temp = n;
	sum = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		counter++;
	}
	digits = counter - 1;
	temp = n;
	while (temp != 0)
	{
		rem = temp % 10;
		pow = 1;
		for (i = 0; i < digits; i++)
		{
			pow *= 10;
		}
		digits--;
		temp = temp / 10;
		sum = sum + rem * pow;
	}
	if (sum == 0)
		_putchar(48);
	else
	{
		while (sum != 0)
		{
			rem = sum % 10;
			_putchar(rem + 48);
			sum = sum / 10;
		}
	}
	_putchar('\n');
}

/**
 * power - returns powers of 10 per number of digits
 * @m: integer input
 * Return: pow;
 */

int power(int m)
{
	int pow;

	pow = 1;
	for (i = 0; i < digits; i++)
	{
		pow *= 10;
	}
}
