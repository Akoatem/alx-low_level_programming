#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue
		}
		_putchar(x);
	}
	_putchar(10);
}

