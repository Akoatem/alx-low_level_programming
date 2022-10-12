#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main-perfoms simple operations
 * @ac: arg counter
 * @av: arg vector
 * Return: 0
 */

int main(int ac, char *av[])
{
	int n1 = atoi(av[1]), n2 = atoi(av[3]);
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(av[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(n1, n2));

	return (0);
}
