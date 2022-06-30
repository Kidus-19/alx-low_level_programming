#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - assigns a memory location for the
 * string passed to it dynamically and assigns to it.
 * @str: string parameter
 * Return: nstr
 */

char *_strdup(char *str)
{
	char *nstr;
	int i;
	int len;

	if (str)
	{
		len = _strlen(str);
		nstr = (char *)(malloc(len * sizeof(char)));
		if (nstr)
		{
			for (i = 0; i < len; i++)
			{
				nstr[i] = str[i];
			}
		}
		return (nstr);
	}
	return ('\0');
}

/**
 * _strlen - returns the length of the string.
 * @str: the string.
 * Return: len (the length).
 */

int _strlen(char *str)
{
	int len;
	int i;

	if (str)
	{
		len = 1;
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		return (len);
	}
	return ('\0');
}
