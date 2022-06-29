#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of char c
  * of Size size.
  * @size: size of the array.
  * @c: character to be assigned in the array.
  * Return: a pointer to char, or NULL(if size = 0).
  */

char *create_array(unsigned int size, char c)
{
	char *str = (char *)(malloc(size * sizeof(char)));
	int i;

	if (n == 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}

