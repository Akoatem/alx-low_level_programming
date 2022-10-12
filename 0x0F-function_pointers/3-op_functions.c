#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return the sum of 2 numbers.
 * @a: integer.
 * @b: integer.
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return differencse of 2 numbers
 * @a: integer.
 * @b: integer.
 *
 * Return: differences.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product of two numbers.
 * @a: integer.
 * @b: integer.
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of two numbers.
 * @a: integer.
 * @b: integer.
 *
 * Return: quotient.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return the remainder of two numbers
 * @a: integer.
 * @b: integer.
 *
 * Return: remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
