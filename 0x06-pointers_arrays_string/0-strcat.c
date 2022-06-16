#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first sting
 * @src: a string that is appended to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(dest) + _strlen(src) - 1;
	for (i = 0; i < len; i++)
	{
		if (i > _strlen(dest))
			dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - computes the length of a string
 * @str:  a string parameter
 * Return: len
 */

int _strlen(char *str)
{
	int len;
	int i;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
