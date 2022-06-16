#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes each word.
 * @str: string parameter.
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int len;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			str[i] = str[i] - 32;
		else if ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}') && str[i + 1] != '\0')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
