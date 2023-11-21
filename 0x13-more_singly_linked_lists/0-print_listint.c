#include "lists.h"

/**
 * print_listint - A funt that prints all elements of a linked list
 * @h: The linked list of type listint_t to print
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
