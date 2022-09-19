#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int i, password, len;

	srand((unsigned int)time(NULL));

	if (len >= 5)
	{
		for (i = 0; i < len; i++)
		{
			int k = rand() % 128;
			if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 35 && k <= 37) || k == 64)
			{
				printf("%c", k);
				else
				{
					i--;
				}
			}
			printf('\n');
		}
		else
		{
			printf("LENGHT SHOULD BE GREATER THAN 5\N");
		}
	}
	return (0);
}
