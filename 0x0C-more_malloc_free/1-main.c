#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("hello", " methe dnfk", 5);
	printf("%s %lu\n", concat, strlen(concat));
	free(concat);
	return (0);
}
