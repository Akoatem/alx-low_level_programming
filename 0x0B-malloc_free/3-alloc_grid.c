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
	int i, j, len1, len2;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **)malloc(sizeof(int *) * height);
		if (!p)
		{
			free(p);
			return (NULL);
		}
		i = 0;
		while (i < height)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
			i++;
		}
		len1 = 0;
		while (len1 < height)
		{
			for (len2 = 0; len2 < width; len2++)
			{
				p[len1][len2] = 0;
			}
			len1++;
		}
		return (p);
	}
}



