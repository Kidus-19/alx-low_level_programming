#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: a character pointer
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	int (*get_op_func(char *s))(int, int) = {op_add,
	       	op_sub, op_mul, op_div, op_mod};
	if (i < 6)
	{
		get_op_func(ops[i])(a, b);
		return (ops[i]);
	}
	return (NULL);
}
