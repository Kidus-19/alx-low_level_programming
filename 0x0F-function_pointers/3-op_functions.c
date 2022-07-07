#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - a function that adds 2 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtructs 2 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies 2 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides 2 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that modulos 2 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

