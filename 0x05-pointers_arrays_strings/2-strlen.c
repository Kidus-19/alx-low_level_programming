#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	char i;

	counter = 0;
	for (i = s[0]; i != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
