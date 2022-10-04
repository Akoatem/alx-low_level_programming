#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	while (i < height)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
		while (j < weight)
			return (NULL);
	return (NULL);
}
