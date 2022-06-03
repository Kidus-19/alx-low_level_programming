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
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
