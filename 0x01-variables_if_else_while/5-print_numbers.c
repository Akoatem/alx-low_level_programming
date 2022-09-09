#include <stdio.h>

/**
 * main - print single digit
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
