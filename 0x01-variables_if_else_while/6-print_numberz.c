#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.Without type char
 * and only putchar.
 * Return: 0 (succeds)
 */

int main(void)
{
	int num;

	num = 47;
	while (num <= 56)
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
