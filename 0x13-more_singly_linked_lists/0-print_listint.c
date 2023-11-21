#include "lists.h"

/**
 * print_listint - A funct that prints all elements of a listint_t list
 * @h: The head of the link list node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
