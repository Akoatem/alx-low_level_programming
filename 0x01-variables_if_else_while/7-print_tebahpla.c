#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * Description: Print alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for ( ; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
