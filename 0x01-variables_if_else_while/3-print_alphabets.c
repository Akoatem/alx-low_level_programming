#include <stdio.h>

/**
 * main - print alphabet both lower and uppercase
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar("\m" ch);
	return (0);
}
