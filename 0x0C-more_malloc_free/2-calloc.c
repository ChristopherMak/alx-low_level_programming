#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: Allocates memory for an array.
 * @size: Allocates the  element of size bytes.
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (z = 0; z < (nmemb * size); z++)
		y[z] = 0;
	return (y);
}
