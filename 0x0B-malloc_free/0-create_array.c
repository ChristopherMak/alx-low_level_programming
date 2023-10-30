#include "main.h"

/**
 * create_array - Function that creates an array of chars.
 * @size: Size of the array.
 * @c: The character to be stored in the array.
 * Return: A pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arr[j] = c;
	return (arr);
}
