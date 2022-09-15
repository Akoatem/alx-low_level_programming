#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: parameter
 *
 * return: void
 */

void print_diagonal(int n)
{
	int len, spare;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (spare =  0; spare < len; spare++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
