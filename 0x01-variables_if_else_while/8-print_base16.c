#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.you can
 * only use the putchar function.
 * Return: 0 (succeds)
 */

int main(void)
{
	int num;

	num = 0x0 ;
	while ( num<16 )
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
