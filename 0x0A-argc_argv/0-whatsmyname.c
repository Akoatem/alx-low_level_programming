#include "main.h"
#include <stdio.h>


/**
 *  main - a program that prints its name.
 *  @argc: arguement count.
 *  @argv: argument value, a strings that come after calling function
 *
 *  Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}


