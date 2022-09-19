#include <main.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 *  Return: length of string
 */

int _strlen(char *s)
{
	char s[25], *t;
	int len = 0;

	t = s;
	while (*t != '\0')
	{
		len++;
		t++
	}
	return (len);
}
