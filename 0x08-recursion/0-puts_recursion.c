#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	/*s = "ako\0"*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
