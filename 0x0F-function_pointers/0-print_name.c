#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: pointer to name.
 * @f: function to pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
