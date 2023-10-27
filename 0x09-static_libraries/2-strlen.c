#include "main.h"

/**
 * _strlen - The program returns the length of a string
 * @s: The string
 * Return: The length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
