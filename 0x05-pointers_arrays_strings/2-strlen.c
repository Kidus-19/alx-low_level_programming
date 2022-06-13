#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = s; i != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
