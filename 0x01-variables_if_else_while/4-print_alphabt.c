#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.Except e & q.
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' || c != 'q')
			putchar(c++);
	}
	putchar('\n');
	return (0);
}
