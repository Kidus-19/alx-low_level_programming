#include <stdio.h>

/**
 * main - finds largest prime factor.
 * Return: 0 (Success)
 */

int main(void)
{
	long int num;
	long int div;
	long int max;

	num = 612852475143;
	div = 2;
	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			max = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
	return (0);
}
