#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (; a >= 0; a--)
		_putchar(s[a]);
	{
		a--;
	}
	_putchar('\n');
}
