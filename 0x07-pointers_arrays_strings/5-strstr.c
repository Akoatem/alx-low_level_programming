#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: input string
 *
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack; /*values*/
		s2 = needles;
		while (*haystack != '\0' && s2 != '\0' && *haystack == s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
