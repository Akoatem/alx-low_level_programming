#include "lists.h"

/**
 * print_listint - fucntion that print all element in the list
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *nodes = h;
	size_t count = 0;

	while (modes != NULL)
	{
		printf("%d\n", nodes->n);
		count += 1;
		nodes = nodes->next;
	}
	return (count);
}
