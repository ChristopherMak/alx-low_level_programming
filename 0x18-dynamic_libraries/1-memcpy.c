#include "main.h"

/**
 * _memcpy - This function copies a memory area
 * @dest: Where the memory is stored
 * @src: Where the memory is copied
 * @n: The number of bytes
 * Return: The copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int c = n;

	for (; b < c; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
