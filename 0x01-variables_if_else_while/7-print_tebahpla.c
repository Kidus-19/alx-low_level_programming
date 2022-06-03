#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * You can only use the putchar function & only twice.
 * Return: 0 (succeds)
 */
int main(void)
{
	char backwards;

	backwards = 'z';
	while (backwards >= 'a')
	{
		putchar(backwards--);
	}
	putchar('\n');
	return (0);
}
