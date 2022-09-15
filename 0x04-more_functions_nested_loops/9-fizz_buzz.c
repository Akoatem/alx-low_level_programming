#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * or Fizz-Buzz test
 *
 * Return: always 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			ptintf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buz ");
			}
		}
	}
	return (0);
}
