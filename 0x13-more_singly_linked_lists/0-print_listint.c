#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A funct that prints all elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t nodesnum = 0;

    while (h)
    {
        printf("%d\n", h->n);
        nodesnum++;
        h = h->next;
    }

    return (nodesnum);
}

