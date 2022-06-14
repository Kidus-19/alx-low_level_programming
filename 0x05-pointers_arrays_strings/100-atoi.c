#include "main.h"

/**
 * _atoi - filters the number out from a string
 * @s: input string
 */

int _atoi(char *s)
{
	int idx1;
	int idx2;
	int i;
	bool sign;
	int len;

	len = _strlen(s);
	sign = false;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 || s[i] <= 57)
		{
			idx1 = i;
		}
		if (i != 0 && s[i-1] == '-')
			sign = true;
		break;
	}
	for (i = idx1; i < len; i++)
	{
		if !(s[i] >= 48 || s[i] <= 57)
		{
			idx2 = i;
			break;
		}
		else{
			idx2 = i;
		}
	}
	if (sign)
		_putchar('\n');
	for(i = idx1; i < idx2; i++)
		_putchar(i + 48);
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
