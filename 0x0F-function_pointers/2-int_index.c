#include "function_pointers.h"

/**
 * int_index - This is a function that searches for an integer.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: The pointer to the function to be used for comparing values.
 *
 * Return: If no element or size matches <= 0 - -1.
 * Alternatively - The index of the first element
 * of which the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
