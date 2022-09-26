#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: source string
 * @src: string filling
 * @n: length of buffer
 *
 * Return: new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned short int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
