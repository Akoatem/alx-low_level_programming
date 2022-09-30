#include <stdio.h>

/**
 * main - print names and number
 * @argc: argument
 * @argv: fhfke frjfnj
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc index %d: %s\n", i, argv[i]);
		printf("argc index %d: %s\n", argc, argv[argc]);
	}
	return (0);
}
