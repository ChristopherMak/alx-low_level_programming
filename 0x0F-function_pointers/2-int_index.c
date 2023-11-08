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
	int index = 0;

	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]) != 0)
					return (index);
				index++;
			}
		}
	}

	return (-1);
}
