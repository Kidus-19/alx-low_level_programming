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
	char temp1;

	len = _strlen(s);
	j = len - 1;
	temp1 = temp2 = ' ';
	for (i = 0; i <= len / 2; i++)
	{
		temp1 = s[i];
		s[i] = s[j--];
		s[j] = temp1;

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
