#include "main.h"
#include <stdlib.h>

/**
 * _string_nconcat - concatenates two strings and return length
 * @string: string length
 *
 * Return: string
 */

int _strlen(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n byte of s2: return a pointer
 * @s1: string 1
 * @s2: string 2
 * @n: n byte to concat from string
 * Return: pointer to concantenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, count, i, j;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	count = _strlen(s1) + num + 1;
	p = malloc(sizeof(*p) * count);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < num)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}

