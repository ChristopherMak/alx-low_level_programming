#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: The size of bytes allocated.
 * Return: The pointer to the memory allocated.
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
