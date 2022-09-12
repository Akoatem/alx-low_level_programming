#include <stdio.h>

/**
 * main - welcome to double double
 * Description: Print two two numbers combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 1 + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((1 % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' '0;
		}
	}
	putchar(10);
	return (0);
}
