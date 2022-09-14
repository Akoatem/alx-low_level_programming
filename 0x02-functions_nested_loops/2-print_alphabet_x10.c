#include "main.h"

/**
 * void print_alphabet_x10 -> print the lowest alphabet
 * Description: c is doing well to stress me.
 * Return: void
 */


void print_alphabet_x10(void)
{
	int x;
	int i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
