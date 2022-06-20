#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: input string
 * @accept: comparision string
 * Return: str;
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int cnt;
	char str[100];

	cnt = 0;
	j = 0;
	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				str[cnt++] = s[j];
			}
		}
		j++;
	}
	str[cnt] = '\0';
	return (str);
}
