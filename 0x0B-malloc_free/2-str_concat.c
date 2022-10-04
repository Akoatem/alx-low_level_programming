#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, size, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	size = a + b;
	new_str = malloc((sizeof(char) * size) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		new_str[i] = s1[i];
	}
	j = 0;
	while (i <= size)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}
