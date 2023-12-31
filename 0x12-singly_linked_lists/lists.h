#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_s - A singly linked list
 * @str: string or malloced string
 * @len: The length of the string
 * @next: The pointer to the next node
 *
 * Desscription: singly linked list node structure
 * for Hlberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
