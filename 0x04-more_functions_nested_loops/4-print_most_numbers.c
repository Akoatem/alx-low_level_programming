#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
			_putchar(b);
	}
	_putchar('\n');
}

