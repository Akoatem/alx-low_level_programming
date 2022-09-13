#include "main.h"

/**
 * main - Print out alphabet of good
 * Description: Alphaphet print in order print the letters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
