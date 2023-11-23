#include "main.h"

/**
 * clear_bit - A funct that sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to be changed.
 * @index: The index of the bit to clear.
 * Return: 1 for success and -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof (n) * 8)
		return (-1);
	*n &=  ~(1 << index);
	return (1);
}
