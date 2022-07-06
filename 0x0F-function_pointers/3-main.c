#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - returns operation
 * @argc: number of arguments
 * @argv: The actual arguments
 * Return: op
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int d;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = atoi(argv[2]);
	d = atoi(argv[4]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (c != '+' || c != '-' ||
			c != '*' || c != '%'
			|| c != '/')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*get_op_func(b))(a, b) ||
		(*get_op_func(b))(a, b) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
