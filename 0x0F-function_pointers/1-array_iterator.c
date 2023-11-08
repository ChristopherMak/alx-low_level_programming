#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This is a function that executes a function
 * given as a parameter on each element of an array.
 * @array: The arary.
 * @size: The size of the array.
 * @action: The pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
