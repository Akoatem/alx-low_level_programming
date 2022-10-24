#include "lists.h"

/**
 * print_listint - fucntion that print all element in the list
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("elements in list: %d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
