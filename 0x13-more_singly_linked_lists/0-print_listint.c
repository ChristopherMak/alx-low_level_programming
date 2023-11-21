#include "lists.h"

/**
 * print_listint - A funct that prints all elements of a list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodesnum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesnum++;
	}
	return (nodesnum);
}
