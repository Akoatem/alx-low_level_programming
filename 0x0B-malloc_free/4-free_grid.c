#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_grid - A function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		return;
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
