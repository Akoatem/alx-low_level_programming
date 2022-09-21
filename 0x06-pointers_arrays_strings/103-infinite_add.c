/*
 * File: 102-infinite_add.c
 */


#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * infinite_add - C function that adds two numbers stored
 * in strings to a buffer.
 * Assumes that strings are never empty and
 * that number will always be positive, or 0.
 * Assume there are only digits stored in the number strings.
 * if result can be stored in the buffer.
 * return a pointer to the result.
 * if result cannot be stored in the buffer, return 0.
 * @n1: first number is added
 * @n2: second number is added
 * @r: store result
 * @size_r: size of buffer
 * Return: return pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}
/**
 * infinite_add - C function that
 * @n1: first number is added
 * @n2: second number is added
 * @r: store result
 * @r_index: The current index of the buffe
 * @size_r:  is the buffer size
 *
 * Return:if r can store the sum - a pointer to the result.
 *        if r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
	for (index = 0; *(n2 + index); index++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);
	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}

