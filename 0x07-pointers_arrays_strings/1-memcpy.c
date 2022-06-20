#include "main.h"

/**
 * _memcpy - function copies n bytes from
 *  memory area src to memory area dest
 *  @dest: a memory that gets the copy.
 *  @src: a memory that is copied
 *  @n: number of n src memory addresses copied.
 *  Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
