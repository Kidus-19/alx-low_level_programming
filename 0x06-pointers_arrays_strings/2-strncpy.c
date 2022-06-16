#include "main.h"

/**
 * _strncpy - copies one string to other
 * @dest: first string
 * @src: second string
 * @n: number of characters to get copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
