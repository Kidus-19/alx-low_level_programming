#include "main.h"

/**
 * _islower - checks for lower case
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	       return (1);
	else
		return (0);
}
