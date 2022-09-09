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

	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
