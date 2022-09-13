#include "main.h"

/**
 * main - Print out alphabet
 * Description: Alphaphet print in order
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
