#include "main.h"

/**
 *  main - a program that prints its name.
 *  @argc: arguement count.
 *  @argv: argument value, a strings that come after calling function
 *
 *  Return: Always 0 (Success)
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar("%s", argv[i]);
	}
	_putchar('\n');
}

