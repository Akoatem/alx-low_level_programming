#include <stdio.h>

/**
 * main - different combinations of two digits
 * description: double digit
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;
	}
	putchar(10);

	return (0);
}
