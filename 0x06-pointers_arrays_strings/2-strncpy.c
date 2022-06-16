#include "main.h"

/**
 * _strncpy - copies one string to other
 * @dest: first string
 * @src: second string
 * @n: number of characters to get copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen;

	srclen = _strlen(src);
	for (i = 0; i < n && i < srclen; i++)
	{
		dest[i] = src[i];
	}
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
