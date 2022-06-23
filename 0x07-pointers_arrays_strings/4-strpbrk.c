#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: input string
 * @accept: comparision string
 * Return: s;
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int cnt;
	char str[100];

	cnt = 0;
	j = 0;
	k = 0;
	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				str[cnt++] = s[j];
				break;
			}
		}
		j++;
	}
	str[cnt] = '\0';
	for (k = 0; str[k] != '\0'; k++)
	{
		s[k] = str[k];
	}
	s[k] = '\0';
	return (s);
}
