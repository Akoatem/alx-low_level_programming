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
	for (; i <= 7; i++)
	{
		for (; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
