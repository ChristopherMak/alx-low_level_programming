#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of byte to be searched for.
 * Return: If a set is matched -  a pointer to the matched byte.
 * If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}

		s++;
	}
	return ('\0');
}
