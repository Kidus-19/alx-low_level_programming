include "main.h"

/**
 * _strcpy - copies string in to other one.
 * @src: a source for the copy
 * @dest: a destionation for the copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	for (int i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

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
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
~
