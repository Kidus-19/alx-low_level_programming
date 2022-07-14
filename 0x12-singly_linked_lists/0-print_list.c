#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print list
 * @h: pointer to linked list
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h->next != NULL)
		{
			++n;
		}
	}
	return ((size_t)n)
}
