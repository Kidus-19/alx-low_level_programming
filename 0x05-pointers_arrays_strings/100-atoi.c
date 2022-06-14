#include "main.h"

/**
 * _atoi - filters the number out from a string
 * @s: input string
 * Return: sum
 */

int _atoi(char *s)
{
	int idx1;
	int idx2;
	int i;
	bool sign;
	int len;
	int sum;
	int pow;

	sum = 0;
	len = _strlen(s);
	sign = false;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 || s[i] <= 57)
			idx1 = i;
		if (i != 0 && s[i - 1] == '-')
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
		else
		{
			idx2 = i;
		}
	}
	pow = idx2 - idx1 - 1;
	for (i = idx1; i < idx2; i++)
	{
		sum += (s[i] - '\0') * _pow(pow);
	}
	if (sign)
		sum = -sum;
	return (sum);
}

/**
 * _pow - computes the pow of 10
 * @pow: computes pow;
 * Return: product
 */

int _pow(int pow)
{
	int product;
	int i;

	product =  1;
	for (i = 0; i < pow; i++)
	{
		product *= 10;
	}
	return (product);
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
