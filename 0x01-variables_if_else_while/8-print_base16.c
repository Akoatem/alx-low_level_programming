#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: Print hexadecimal number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);
	return (0);
}
