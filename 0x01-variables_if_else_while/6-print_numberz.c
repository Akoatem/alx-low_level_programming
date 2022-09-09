#include <stdio.h>

/**
 * main - Base 10 numbers
 * Description:prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	i = 48;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
