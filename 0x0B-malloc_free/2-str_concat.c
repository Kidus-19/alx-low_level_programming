#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concats 2 strings in the heap
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1;
	int len2;
	char *concat;

	j = 0;
	if (s1 || s2)
	{
		len1 = _strlen(s1) - 1;
		len2 = _strlen(s2);
		concat = (char *)(malloc(sizeof(char) * (len1 + len2)));
		if (concat)
		{
			for (i = 0; i < len1; i++)
			{
				concat[i] = s1[i];
			}
			for (; i < len1 + len2; i++)
			{
				concat[i] = s2[j++];
			}
			/*concat[i] = '\0';*/
			return (concat);
		}
	}
	return ('\0');
}

/**
 * _strlen - returns the lenght of the string
 * @str: the string input
 * Return: len;
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
