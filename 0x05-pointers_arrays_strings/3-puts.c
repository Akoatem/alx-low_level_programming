#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
