#include <stdio.h>

/**
 * swap_int - Swaps thw values of the integers
 * @a: The first integer to be swapped
 * @b: The seconfd integer to wapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b= temp;
}

