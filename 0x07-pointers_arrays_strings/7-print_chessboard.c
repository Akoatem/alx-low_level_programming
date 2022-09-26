#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array of pointers
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 7)
	{
		while (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(10);
		i++;
	}
}
