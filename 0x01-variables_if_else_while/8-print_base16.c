#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: Print hexadecimal number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 0;

	for (k = 0; k < 10; k++)
	{
		if (k < 10)
			putchar(k + '0');
		else if (k > 41)
			putchar(k - 10 + 'A')
	}
	putchar(10);
	return (0);
}
