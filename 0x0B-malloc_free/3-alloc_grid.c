#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates 2d array dynamically
 * @width: number of columns
 * @height: number of rows
 * Return: numGrid
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **numGrid;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	numGrid = (int **)(malloc(sizeof(int *) * (height)));
	for (i = 0; i < height; i++)
		numGrid[i] = (int *)(malloc(sizeof(int) * width));
	i = 0;
	if (numGrid)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				numGrid[i][j] = 0;
			}
		}
		return (numGrid);
	}
	else
	{
		free(numGrid);
	}
		return (numGrid);
}
