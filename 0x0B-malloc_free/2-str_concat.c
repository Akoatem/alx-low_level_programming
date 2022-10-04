#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned short int a, b, size, i, j;
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
		new_str[i] = a[i];
	}
	for (j = 0; j < b; j++)
	{
		new_str[j] = b[j];
	}
	return (new_str);
}