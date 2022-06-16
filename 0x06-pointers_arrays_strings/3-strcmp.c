#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: res
 */

int _strcmp(char *s1, char *s2)
{
	int res;
	int i;
	int len_s1;
	int len_s2;
	int min;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (len_s1 - len_s2 <= 0)
		min = len_s1;
	else
		min = len_s2;
	for (i = 0; i < min; i++)
	{
		if (i == min - 1 && s1[i] == s2[i])
		{
			if (len_s2 == len_s1)
				res = 0;
		}
		else if (s1[i] > s2[i])
		{
			res = 1;
			break;
		}
		else if (s2[i] > s1[i])
		{
			res = -1;
			break;
		}
	}
	return (res);
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
