#include "main.h"

/**
 * rev_string - prints string in a reverse order
 * @s: char pointer
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char *s2;

	j = 0;
	s2 = s;
	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		s2[j++] = s[i];
	}
	for (i = 0; i < j; i++)
	{
		s[i] = s2[i];
	}
}

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: counter
 */

int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
