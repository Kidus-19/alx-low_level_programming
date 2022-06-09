#include "main.h"

/**
 * more_numbers - 0 to 14 10x
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
				k = j + 48;
			else
			{
				k = j % 10 + 48;
				_putchar(49);
			}
			_putchar(k);
		}
		i++;
		_putchar('\n');
	}
}
