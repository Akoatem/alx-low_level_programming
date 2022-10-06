#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of element in array.
 * @size: size of element of array.
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		*((char *)(p) + 1) = 0;
		i++;
	}
	return (p);
}
