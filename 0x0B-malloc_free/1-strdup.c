#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer.
 * newly allocated space in memory
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int len = 0;
	int i = 0;
	/* check is str is null*/
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new_str = malloc(sizeof(char) * (len + 1));
	/* check if malloc was sucessful*/
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}
