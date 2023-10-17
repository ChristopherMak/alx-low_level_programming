#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integers to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

