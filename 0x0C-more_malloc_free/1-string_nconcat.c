#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates twon string in which the second
 * string's n characters are appended to the first.
 * @s1: string input.
 * @s2: string input.
 * @n: size of s2 chars get appended to s1.
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int j;
	unsigned int len1;
	unsigned int len2;
	char *concat;

	j = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1) - 1;
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	concat = (char *)(malloc(len1 + n));
	if (concat)
	{
		for (i = 0; i < len1; i++)
		{
			concat[i] = s1[i];
		}
		for (; i < len1 + n; i++)
		{
			concat[i] = s2[j++];
		}
		concat[i] = '\0';
		return (concat);
	}
	return ('\0');
}

/**
 * _strlen - returns the length of the string
 * @str: the string input
 * Return: len
 */

int _strlen(char *str)
{
	int i;
	int len;

	len = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
