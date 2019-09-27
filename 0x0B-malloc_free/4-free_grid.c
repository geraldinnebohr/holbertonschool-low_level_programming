#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid: is a double pointer of an integer
 *@height: is an integer
 */

void free_grid(int **grid, int height)
{
	int i;

	(void)height;

	i = 0;

	if (grid != NULL)
	{
		while (grid[i])
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
