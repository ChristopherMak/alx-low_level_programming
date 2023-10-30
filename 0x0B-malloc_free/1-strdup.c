#include "main.h"

/**
 * char *_strdup - Function that copies a string to a newly allocated space in memory.
 * @str: The string to copy to the newly allocated memory.
 * Return: A pointer to the newly allocated memory.
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

