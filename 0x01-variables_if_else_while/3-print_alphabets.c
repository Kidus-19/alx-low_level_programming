#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	char small;
	char cap;

	small = 'a';
	cap = 'A';
	while (small <= 'z')
	{
		putchar(small++);
	}
	 while (cap <= 'Z')
        {
        	putchar(cap++);
        }
	putchar('\n');
	return (0);
}
