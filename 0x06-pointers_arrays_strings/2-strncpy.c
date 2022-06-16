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

	/*srclen = _strlen(src);*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
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
