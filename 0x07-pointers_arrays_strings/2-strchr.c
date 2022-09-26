#include "main.h"

/**
 * _strchr - unction that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: always s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0); /* values null*/
}
