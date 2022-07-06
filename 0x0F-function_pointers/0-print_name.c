#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name based on different functions.
 * @name: a pointer to character
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
