#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that splits a string into words
 * @ac: argument of the array
 * @av: pointer to the array of size
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, size;
	char *arg;

	size = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arg[len] = av[i][j];
			j++;
			len++;
		}
		arg[len] = '\n';
		len++;
	}
	return (arg);
}

