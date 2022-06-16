#include "main.h"

char *string_toupper(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		if(str[i] >= 65 && str[i] < 91)
			str[i] = str[i] + 32;
	}
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
