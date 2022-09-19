#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	while (i < 100)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		_putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
		i++;
	}
	return (0);
}
