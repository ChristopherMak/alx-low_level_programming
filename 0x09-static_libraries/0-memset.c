#include "main.h"

/**
 * _memset - A program that fills a block of memory with a specific value
 * @s: The beginning address of memory to be filled
 * @b: desired value
 * @n: the nunmber of bytes to altered
 * Return: array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (i);
}
