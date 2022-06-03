#include <stdio.h>
#include <stdlib.h>

/**
 * main -a program that prints all possible different combinations
 * of three digits.Numbers must be separated by ,, followed by a space
 * The three digits must be different.Print only the smallest
 * combination of three digits
 * Return: 0 (success)
 */

int main(void)
{
	int sum;
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				sum = 100 * i + 10 * j + k;
				if (i == 7 && j == 8 && k == 9)
				{
					putchar(sum);
					putchar(' ');
				}
				else
				{
					putchar(sum);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
