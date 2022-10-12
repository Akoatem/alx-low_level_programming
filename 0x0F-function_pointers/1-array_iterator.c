#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given, each el of the array
 * @array: the array
 * @size: the size of the array
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
	for (; i < size; i++)
		action(array[i]);
	}
}
