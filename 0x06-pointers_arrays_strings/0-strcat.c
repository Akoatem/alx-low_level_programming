#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @src: input string
 * @dest: input string
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
