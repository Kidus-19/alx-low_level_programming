#include "main.h"
#include <stdio.h>

/**
 * main - test
 * Return: 0 (success)
 */

int main(void)
{
	int len;
	char strr[10] = "123456789";

	len = _strlen(strr);
	printf("%d\n", len);
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
