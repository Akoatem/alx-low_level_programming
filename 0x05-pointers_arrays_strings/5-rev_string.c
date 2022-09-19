#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	for (; half >= 0; half--)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
	}
}
