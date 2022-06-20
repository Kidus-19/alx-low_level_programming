#include "main.h"

/**
 * _strspn - the number of characters of s same with accept
 * @s: first string
 * @accept: substring
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int  j;
	int check;

	j = 0;
	check = 0;
	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
				check = 1;
		}
		if (check == 1)
		{
			j++;
			check = 0;
		}
		else
			break;
	}
	return (j);
}
