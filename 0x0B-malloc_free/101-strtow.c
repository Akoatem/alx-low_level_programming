#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordnos - function that splits a string into words.
 * @s: pointer to the string
 *
 * Return: no of word in the string (int)
 */

int wordnos(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;
	for (a = 0; s[b] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - splits a string into word
 * @str: string to split
 *
 * Return: pointer to an array of strings (success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **hero, *p, i, k = 0;
	int len = 0, words;
	int a = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);
	hero = (char **) malloc(sizeof(char *) * (words + 1));
	if (hero == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				p = (char *) malloc(sizeof(char) * (a + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
					*p++ = str[start++];
				*p = '\0';
				hero[k] = p - a;
				k++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
		i++;
	}
	hero[k] = NULL;
	return (hero);
}
