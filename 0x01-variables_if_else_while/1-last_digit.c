#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program to string of number
 *
 * Description: store a different value every time you run this program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (lastNum == 0)
		prinft("Last digit of %d is %d and is 0\n", n, last);
	else if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);



}
