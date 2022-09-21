#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *  @s: An input string to capitalize letters
 *  Return: pointer to s
 */

char *cap_string(char *s)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == ',' ||
				str[index - 1] == '!' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}'
			str[index] -= 32;
	}
	return (str);
}
