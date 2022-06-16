#include "main.h"

/**
 * _strncat - appends n chars of src to dest
 * @dest: first string
 * @src: second string to append on dest
 * @n: n characters of src that are appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	if (n == 0)
		return (dest);
	for (i = 0; i < n - 1 && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = src[i];
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
