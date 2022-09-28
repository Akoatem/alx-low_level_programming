#include "main.h"
int check_prime(int, int);

/**
 * is_prime_number - function that returns 1 if the input integer
 *
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - it check prime number
 * @n: integer
 * @i: iterator
 * Return: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		_putchar(1);
	return (check_prime(n, i + 1));
}

