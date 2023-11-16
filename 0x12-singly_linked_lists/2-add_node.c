#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A funct that adds a node at the beginning of a linked list
 * @head: The double pointer to the list_t list
 * @str: The string to add to the node
 * Return: The address of the new element, or NULL if there's an error
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = leln;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
