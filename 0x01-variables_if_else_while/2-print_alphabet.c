#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line. Only uses putchar & two times
 * Return: 0 (sucess)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar('\n');

	return (0);

}
