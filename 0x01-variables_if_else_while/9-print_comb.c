#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 * single-digit numbers.Numbers must be separated by ,,
 * followed by a spaceNumbers should be printed
 * in ascending order
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i++);
		if (i == 57)
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
