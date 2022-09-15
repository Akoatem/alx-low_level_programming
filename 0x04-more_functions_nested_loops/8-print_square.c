#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int y, z;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (z = 0; z < (size - 1); z++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
