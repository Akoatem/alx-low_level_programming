#include "main.h"
#include "main.h"


/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * return---> non zero --->character is uppercase
 * return---> zero --->character is not uppercase
 */

int _isupper(int c)
{
	char c = 'a';

	if (isupper(c) == 0)
	{
		_putchar("Not upper");
	}
	else
	{
		_putchar("Uppercase")
	}
	return (0);
}
