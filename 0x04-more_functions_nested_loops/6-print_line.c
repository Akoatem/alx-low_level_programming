#include "main.h"

/**
 * print_line - print straight line
 * @n: is the number of times the character
 * return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
