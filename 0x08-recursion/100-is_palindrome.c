#include "main.h"

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: the string.
 * Return: 1(success, is Palindrome) otherwise 0
 */

int is_palindrome(char *s)
{
	return (0 + _isPal(s, s + _strlen(s) - 1));
}

/**
 * _strlen - returns the length of a string.
 * @s: The  string.
 * Return: len
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}

/**
 * _isPal - finds the palindrome state of string.
 * @start: a ponter to the string.
 * @ends: a pointer to last character.
 * Return: 1 (if pal is true), otherwise 0.
 */

int _isPal(char *start, char *ends)
{
	if (*start != *ends)
	{
		return (0);
	}
	if (start >= ends)
	{
		return (1);
	}
	else
	{
		start++;
		ends--;
	}
	return (1);
}
