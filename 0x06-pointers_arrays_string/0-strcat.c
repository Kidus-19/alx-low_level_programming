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
	int j;
	int len;

	j = 0;
	len = _strlen(dest) + _strlen(src);
	for (i = _strlen(dest); i < len; i++)
	{
		dest[i] = src[j++];
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
