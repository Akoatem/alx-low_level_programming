#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - positive or negative
 *
 * Description: This program will assign a random number to the variable
 * It is executed
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
