#include <unistd.h>

/**
 * reset_to_98 - function that takes a pointer to an int
 * @n: parameter and updates the value it points to to 98
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int n;

	n = 98;
	*p = &n;
	_putchar("%p", &n);
}
